/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString;

@interface SASocialProfile : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *serviceType;	// G=0x34259c65; S=0x34259c81; 
@property(copy, nonatomic) NSString *url;	// G=0x34259cd1; S=0x34259ced; 
@property(copy, nonatomic) NSString *userName;	// G=0x34259d3d; S=0x34259d59; 
+ (id)socialProfile;	// 0x34259bd5
+ (id)socialProfileWithDictionary:(id)dictionary context:(id)context;	// 0x34259c19
- (id)encodedClassName;	// 0x34259bc9
- (id)groupIdentifier;	// 0x34259bb9
// declared property getter: - (id)serviceType;	// 0x34259c65
// declared property setter: - (void)setServiceType:(id)type;	// 0x34259c81
// declared property setter: - (void)setUrl:(id)url;	// 0x34259ced
// declared property setter: - (void)setUserName:(id)name;	// 0x34259d59
// declared property getter: - (id)url;	// 0x34259cd1
// declared property getter: - (id)userName;	// 0x34259d3d
@end

