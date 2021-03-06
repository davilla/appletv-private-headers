/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObjectCommand.h"
#import "SABaseClientBoundCommand.h"

@class SADomainObject;

@interface SADomainObjectCancel : SABaseClientBoundCommand <SADomainObjectCommand> {
}
@property(retain, nonatomic) SADomainObject *identifier;	// G=0x37968f1d; S=0x37968f71; 
+ (id)domainObjectCancel;	// 0x37968e8d
+ (id)domainObjectCancelWithDictionary:(id)dictionary context:(id)context;	// 0x37968ed1
- (id)encodedClassName;	// 0x37968e81
- (id)groupIdentifier;	// 0x37968e71
// declared property getter: - (id)identifier;	// 0x37968f1d
- (BOOL)requiresResponse;	// 0x37968fad
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x37968f71
@end

