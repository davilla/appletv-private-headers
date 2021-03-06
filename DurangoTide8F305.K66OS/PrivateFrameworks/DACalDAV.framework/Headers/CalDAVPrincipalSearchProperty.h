/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface CalDAVPrincipalSearchProperty : NSObject {
	NSString *_name;	// 4 = 0x4
	NSString *_namespace;	// 8 = 0x8
	NSString *_displayName;	// 12 = 0xc
}
@property(retain) NSString *displayName;	// G=0x340bcfdd; S=0x340bd04d; @synthesize=_displayName
@property(readonly, retain) NSString *fullName;	// G=0x340bcba5; 
@property(retain) NSString *name;	// G=0x340bcfad; S=0x340bcff5; @synthesize=_name
@property(retain) NSString *namespace;	// G=0x340bcfc5; S=0x340bd021; @synthesize=_namespace
+ (id)calendarUserAddressSetProperty;	// 0x340bccc5
+ (id)calendarUserTypeProperty;	// 0x340bcced
+ (id)displayNameProperty;	// 0x340bcd65
+ (id)emailAddressSetProperty;	// 0x340bcd15
+ (id)firstNameProperty;	// 0x340bcdb5
+ (id)lastNameProperty;	// 0x340bcd8d
+ (id)propertyWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x340bcddd
+ (id)propertyWithFullName:(id)fullName;	// 0x340bd611
+ (id)propertyWithName:(id)name andNamespace:(id)aNamespace;	// 0x340bcee1
+ (id)propertyWithNode:(id)node;	// 0x340bd699
+ (id)recordTypeProperty;	// 0x340bcd3d
- (id)init;	// 0x340bcc61
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x340bce1d
- (void)dealloc;	// 0x340bcc01
- (id)description;	// 0x340bcb3d
- (id)dictionaryRepresentation;	// 0x340bcaa9
// declared property getter: - (id)displayName;	// 0x340bcfdd
// declared property getter: - (id)fullName;	// 0x340bcba5
// declared property getter: - (id)name;	// 0x340bcfad
// declared property getter: - (id)namespace;	// 0x340bcfc5
// declared property setter: - (void)setDisplayName:(id)name;	// 0x340bd04d
// declared property setter: - (void)setName:(id)name;	// 0x340bcff5
// declared property setter: - (void)setNamespace:(id)aNamespace;	// 0x340bd021
@end

