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
        LEFT_SQUARE,      //
        RIGHT_SQUARE,     //
        PLUS,             //
        MINUS,            //
        MULTIPLY,         //
        DIVIDE,           //
        COMMA,            //
        SEMICOLON,        //
        COLON,            //
        ASSGIN,           //
        PERIOD,           //
        DOT_DOT,          //
        UPARROW,          //
        DIV,
        MOD,
        XOR,
        SHR,
        SHL,
        
        // comparation symbols
        LESS_OR_EQUAL,
        LESS_THAN,
        GREATER_OR_EQUAL,
        GREATER_THAN,
        EQUAL,
        NOT_EQUAL,
        
        UNRESERVED
    };
}

#endif /* defined(__LLVMPascal__token__) */
