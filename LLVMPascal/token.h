//
//  token.h
//  LLVMPascal
//
//  Created by yhf on 10/3/14.
//  Copyright (c) 2014 yhf. All rights reserved.
//

#ifndef __LLVMPascal__token__
#define __LLVMPascal__token__

#include <iostream>
#include <string>
#include <tuple>
#include <map>

namespace llvmpascal {
    enum class TokenType
    {
        INTEGER,
        REAL,
        BOOLEAN,
        CHAR,
        STRING_LITERAL,
        
        IDENTIFIER,
        KEYWORDS,
        OPERATORS,
        DELIMITER,
        END_OF_FILE,
        UNKNOWN
    };
    
    enum class TokenValue
    {
        AND,
        FOR,
        TO,
        DOWNTO,
        DO,
        IF,
        THEN,
        ELSE,
        WHILE,
        REPEAT,
        UNTIL,
        FUNCTION,
        PROCEDURE,
        BEGIN,
        END,
        PROGRAM,
        FORWARD,
        GOTO,
        OR,
        NOT,
        CASE,
        OTHERWISE,
        WITH,
        IN,
        
        // I/O routine
        WRITE,
        WRITELN,
        READ,
        READLN,
        
        // type/var/const
        TYPE,
        VAR,
        PACKED,
        ARRAY,
        OF,
        RECORD,
        CONST,
        FILE,
        SET,
        STRING,
        
        // symbols
        LEFT_PAREN,       // {
        RIGHT_PAREN,      // )
        LEFT_SQUARE,      // [
        RIGHT_SQUARE,     // ]
        PLUS,             // +
        MINUS,            // -
        MULTIPLY,         // *
        DIVIDE,           // /
        COMMA,            // ,
        SEMICOLON,        // ;
        COLON,            // :
        ASSGIN,           // :=
        PERIOD,           // .
        DOT_DOT,          // ..
        UPARROW,          // ^
        DIV,              // div
        MOD,              // mod
        XOR,              // xor
        SHR,              // shr
        SHL,              // shl
        
        // comparation symbols
        LESS_OR_EQUAL,    // <=
        LESS_THAN,        // <
        GREATER_OR_EQUAL, // >=
        GREATER_THAN,     // >
        EQUAL,            // =
        NOT_EQUAL,        // <>
        
        UNRESERVED
    };
    
    
    class TokenLocation
    {
    public:
        TokenLocation();
        TokenLocation(const std::string& fileName, int line, int column);
        
        std::string toString() const;
    private:
        std::string filename_;
        int line_;
        int column_;
    };
    
    class Token{
        Token();
        Token(TokenType type, TokenValue value, const TokenLocation& location,std::string name, int symbolPrecedence);
        Token(TokenType type, TokenValue value, const TokenLocation& location, const std::string& strValue, std::string name);
        Token(TokenType type, TokenValue value, const TokenLocation& location, long intValue, std::string name);
        Token(TokenType type, TokenValue value, const TokenLocation& location, double realValue, std::string name);
        
        // get token information
        TokenType getTokenType() const;
        TokenValue getTokenValue() const;
        const TokenLocation& getTokenLocation() const;
        std::string getTokenName() const;
        
        // + - * / etc.
        int getSymbolPrecedence() const;
        
        // get constant values of token
        long getIntValue() const;
        double getRealValue() const;
        std::string getStringValue() const;
        
        // use it to output debug
        void dump(std::ostream out = std::out) const;
        
        
        std::string tokenTypeDescription() const;
        std::string toString() const;
        
    private:
        TokenType       type_;
        TokenValue      value_;
        TokenLocation   location_;
        int             symbolPrecedence_;
        std::string     name_;
        
        // const values of token
        long            intValue_;
        double          realValue_;
        std::string     strValue_;
        
    };
}

#endif /* defined(__LLVMPascal__token__) */
