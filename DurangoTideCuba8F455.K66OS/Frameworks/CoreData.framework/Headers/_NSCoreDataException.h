/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSException.h> // Unknown library


__attribute__((visibility("hidden"),objc_exception))
@interface _NSCoreDataException : NSException {
@private
	long _code;	// 20 = 0x14
}
@property(readonly, assign) long code;	// G=0x33e66445; converted property
+ (id)exceptionWithName:(id)name code:(long)code reason:(id)reason userInfo:(id)info;	// 0x33e664b9
- (id)initWithName:(id)name code:(long)code reason:(id)reason userInfo:(id)info;	// 0x33e66455
- (id)initWithName:(id)name reason:(id)reason userInfo:(id)info;	// 0x33e66495
// converted property getter: - (long)code;	// 0x33e66445
@end

