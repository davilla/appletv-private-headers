/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"
#import "SAServerBoundCommand.h"

@class NSString;

@interface SAPing : SABaseClientBoundCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(copy, nonatomic) NSString *refId;	// @dynamic
+ (id)ping;	// 0x32f543f1
+ (id)pingWithDictionary:(id)dictionary context:(id)context;	// 0x32f54435
- (id)encodedClassName;	// 0x32f543e5
- (id)groupIdentifier;	// 0x32f543d5
- (BOOL)requiresResponse;	// 0x32f54481
@end

