//
//  token.cpp
//  LLVMPascal
//
//  Created by yhf on 10/3/14.
//  Copyright (c) 2014 yhf. All rights reserved.
//

#include "token.h"


namespace llvmpascal
{
    
    TokenLocation::TokenLocation(const std::string& fileName, int line, int column)
                                 : fileName_(fileName), line_(line), column_(column)
    {}
    
    TokenLocation::TokenLocation() : fileName_(""), line_(1), column_(0)
    {}
    
    std::string TokenLocation::toString() const
    {
        return fileName_ + ":" + std::to_string(line_) + ":" + std::to_string(column_) + ":";
    }
    
}