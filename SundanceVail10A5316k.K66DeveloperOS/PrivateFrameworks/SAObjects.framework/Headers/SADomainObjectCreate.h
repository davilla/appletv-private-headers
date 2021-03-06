/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"
#import "SADomainObjectCommand.h"

@class SADomainObject, NSURL;

@interface SADomainObjectCreate : SABaseClientBoundCommand <SADomainObjectCommand> {
}
@property(retain, nonatomic) SADomainObject *object;	// G=0x32f50ea1; S=0x32f50ef5; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32f50dc5; S=0x32f50e41; 
+ (id)domainObjectCreate;	// 0x32f50d35
+ (id)domainObjectCreateWithDictionary:(id)dictionary context:(id)context;	// 0x32f50d79
- (id)encodedClassName;	// 0x32f50d29
- (id)groupIdentifier;	// 0x32f50d19
// declared property getter: - (id)object;	// 0x32f50ea1
- (BOOL)requiresResponse;	// 0x32f50f31
// declared property setter: - (void)setObject:(id)object;	// 0x32f50ef5
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32f50e41
// declared property getter: - (id)targetAppId;	// 0x32f50dc5
@end

