/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface DATrafficLogger : NSObject {
	NSString *_filename;	// 4 = 0x4
}
+ (BOOL)enabled;	// 0x322720dd
- (id)initWithFilename:(id)filename;	// 0x32272029
- (void)_ensureCustomLogFile;	// 0x32271dc1
- (void)dealloc;	// 0x32272091
- (void)logSnippet:(id)snippet;	// 0x322720e9
@end

