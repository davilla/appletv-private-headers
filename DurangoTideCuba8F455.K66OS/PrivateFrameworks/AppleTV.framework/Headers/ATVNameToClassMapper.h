/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVNameToClassMapper : NSObject {
@private
	NSDictionary *_nameToClass;	// 4 = 0x4
}
- (id)initWithPlist:(id)plist;	// 0x306ef3b9
- (Class)classForName:(id)name;	// 0x306ef349
- (void)dealloc;	// 0x306ef371
@end

