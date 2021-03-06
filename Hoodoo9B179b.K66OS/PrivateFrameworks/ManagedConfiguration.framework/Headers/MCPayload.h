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
@property(readonly, assign) NSString *UUID;	// G=0x348bb8f1; @synthesize=_UUID
@property(retain) NSString *displayName;	// G=0x348bbe89; S=0x348bbe65; @synthesize=_displayName
@property(readonly, assign) NSString *friendlyName;	// G=0x348bbedd; 
@property(readonly, assign) NSString *identifier;	// G=0x348bb911; @synthesize=_identifier
@property(readonly, assign) NSArray *installationWarnings;	// G=0x348bb8cd; 
@property(readonly, assign) NSString *organization;	// G=0x348bb901; @synthesize=_organization
@property(readonly, assign) NSString *payloadDescription;	// G=0x348bb921; @synthesize=_payloadDescription
@property(retain) NSString *persistentResourceID;	// G=0x348bbec5; S=0x348bbea1; @synthesize=_persistentResourceID
@property(readonly, assign) MCProfile *profile;	// G=0x348bb941; @synthesize=_profile
@property(readonly, assign) NSString *type;	// G=0x348bb931; @synthesize=_type
@property(readonly, assign) int version;	// G=0x348bb8e1; @synthesize=_version
+ (id)badFieldTypeErrorWithField:(id)field;	// 0x348bc051
+ (id)badFieldValueErrorWithField:(id)field;	// 0x348bc0b1
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x348bbe05
+ (id)payloadFromDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x348bcbc1
+ (id)payloadsFromArray:(id)array profile:(id)profile outError:(id *)error;	// 0x348bc7c5
+ (id)typeStrings;	// 0x348bb8c9
+ (id)wrapperPayloadDictionary;	// 0x348bbca5
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x348bc111
// declared property getter: - (id)UUID;	// 0x348bb8f1
- (void)dealloc;	// 0x348bbd09
- (id)description;	// 0x348bb951
// declared property getter: - (id)displayName;	// 0x348bbe89
// declared property getter: - (id)friendlyName;	// 0x348bbedd
// declared property getter: - (id)identifier;	// 0x348bb911
// declared property getter: - (id)installationWarnings;	// 0x348bb8cd
- (id)malformedPayloadErrorWithError:(id)error;	// 0x348bbfa9
// declared property getter: - (id)organization;	// 0x348bb901
// declared property getter: - (id)payloadDescription;	// 0x348bb921
// declared property getter: - (id)persistentResourceID;	// 0x348bbec5
// declared property getter: - (id)profile;	// 0x348bb941
// declared property setter: - (void)setDisplayName:(id)name;	// 0x348bbe65
// declared property setter: - (void)setPersistentResourceID:(id)anId;	// 0x348bbea1
- (void)setPersistentResourceID:(id)anId;	// 0x348bbaf5
- (id)stubDictionary;	// 0x348bbb3d
- (id)subtitle1Description;	// 0x348bb8d5
- (id)subtitle1Label;	// 0x348bb8d1
- (id)subtitle2Description;	// 0x348bb8dd
- (id)subtitle2Label;	// 0x348bb8d9
- (id)title;	// 0x348bbae5
// declared property getter: - (id)type;	// 0x348bb931
// declared property getter: - (int)version;	// 0x348bb8e1
@end

