/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSArray;

@interface SAResultCallback : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) int code;	// G=0x32f5bd6d; S=0x32f5bddd; 
@property(copy, nonatomic) NSArray *commands;	// G=0x32f5be21; S=0x32f5be89; 
+ (id)resultCallback;	// 0x32f5bcdd
+ (id)resultCallbackWithDictionary:(id)dictionary context:(id)context;	// 0x32f5bd21
// declared property getter: - (int)code;	// 0x32f5bd6d
// declared property getter: - (id)commands;	// 0x32f5be21
- (id)encodedClassName;	// 0x32f5bcd1
- (id)groupIdentifier;	// 0x32f5bcc1
// declared property setter: - (void)setCode:(int)code;	// 0x32f5bddd
// declared property setter: - (void)setCommands:(id)commands;	// 0x32f5be89
@end

