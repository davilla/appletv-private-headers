/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class DACoreDAVLogger;

@interface CalDAVHTTPTrafficLog : NSObject {
	DACoreDAVLogger *_curLogger;	// 4 = 0x4
}
+ (id)instance;	// 0x34cee57d
- (id)init;	// 0x34cee5c5
- (void)dealloc;	// 0x34cee63d
- (BOOL)enabled;	// 0x34cee689
- (void)finishSnippets;	// 0x34cee6ed
- (void)logData:(id)data;	// 0x34cee781
- (void)logString:(id)string;	// 0x34cee6ad
- (void)logStringWithFormat:(id)format;	// 0x34cee6f1
@end

