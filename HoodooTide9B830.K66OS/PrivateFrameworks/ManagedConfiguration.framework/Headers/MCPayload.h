/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library

@class NSArray, MCProfile, NSString;

@interface MCPayload : NSObject {
	MCProfile *_profile;	// 4 = 0x4
	NSString *_type;	// 8 = 0x8
	NSString *_payloadDescription;	// 12 = 0xc
	NSString *_displayName;	// 16 = 0x10
	NSString *_identifier;	// 20 = 0x14
	NSString *_organization;	// 24 = 0x18
	NSString *_UUID;	// 28 = 0x1c
	int _version;	// 32 = 0x20
	NSString *_persistentResourceID;	// 36 = 0x24
}
@property(readonly, assign) NSString *UUID;	// G=0x33b118f1; @synthesize=_UUID
@property(retain) NSString *displayName;	// G=0x33b11e89; S=0x33b11e65; @synthesize=_displayName
@property(readonly, assign) NSString *friendlyName;	// G=0x33b11edd; 
@property(readonly, assign) NSString *identifier;	// G=0x33b11911; @synthesize=_identifier
@property(readonly, assign) NSArray *installationWarnings;	// G=0x33b118cd; 
@property(readonly, assign) NSString *organization;	// G=0x33b11901; @synthesize=_organization
@property(readonly, assign) NSString *payloadDescription;	// G=0x33b11921; @synthesize=_payloadDescription
@property(retain) NSString *persistentResourceID;	// G=0x33b11ec5; S=0x33b11ea1; @synthesize=_persistentResourceID
@property(readonly, assign) MCProfile *profile;	// G=0x33b11941; @synthesize=_profile
@property(readonly, assign) NSString *type;	// G=0x33b11931; @synthesize=_type
@property(readonly, assign) int version;	// G=0x33b118e1; @synthesize=_version
+ (id)badFieldTypeErrorWithField:(id)field;	// 0x33b12051
+ (id)badFieldValueErrorWithField:(id)field;	// 0x33b120b1
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x33b11e05
+ (id)payloadFromDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x33b12bc1
+ (id)payloadsFromArray:(id)array profile:(id)profile outError:(id *)error;	// 0x33b127c5
+ (id)typeStrings;	// 0x33b118c9
+ (id)wrapperPayloadDictionary;	// 0x33b11ca5
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x33b12111
// declared property getter: - (id)UUID;	// 0x33b118f1
- (void)dealloc;	// 0x33b11d09
- (id)description;	// 0x33b11951
// declared property getter: - (id)displayName;	// 0x33b11e89
// declared property getter: - (id)friendlyName;	// 0x33b11edd
// declared property getter: - (id)identifier;	// 0x33b11911
// declared property getter: - (id)installationWarnings;	// 0x33b118cd
- (id)malformedPayloadErrorWithError:(id)error;	// 0x33b11fa9
// declared property getter: - (id)organization;	// 0x33b11901
// declared property getter: - (id)payloadDescription;	// 0x33b11921
// declared property getter: - (id)persistentResourceID;	// 0x33b11ec5
// declared property getter: - (id)profile;	// 0x33b11941
// declared property setter: - (void)setDisplayName:(id)name;	// 0x33b11e65
// declared property setter: - (void)setPersistentResourceID:(id)anId;	// 0x33b11ea1
- (void)setPersistentResourceID:(id)anId;	// 0x33b11af5
- (id)stubDictionary;	// 0x33b11b3d
- (id)subtitle1Description;	// 0x33b118d5
- (id)subtitle1Label;	// 0x33b118d1
- (id)subtitle2Description;	// 0x33b118dd
- (id)subtitle2Label;	// 0x33b118d9
- (id)title;	// 0x33b11ae5
// declared property getter: - (id)type;	// 0x33b11931
// declared property getter: - (int)version;	// 0x33b118e1
@end

