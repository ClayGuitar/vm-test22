//
//  Common.h
//  DDLog
//
//  Created by 程磊 on 14/12/1.
//  Copyright (c) 2014年 程磊. All rights reserved.
//

#import "DDLog.h"
#import "DDTTYLogger.h"

#ifdef DEBUG
static const int ddLogLevel = LOG_LEVEL_VERBOSE;
#else
static const int ddLogLevel = LOG_LEVEL_OFF;
#endif
 
