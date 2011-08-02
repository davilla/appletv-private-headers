/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString, NSData;

@interface IMPerson : NSObject {
	void *_abRecordRef;	// 4 = 0x4
	BOOL _registered;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) void *abRecordRef;	// G=0x30ae1325; 
@property(readonly, assign, nonatomic) NSArray *allEmails;	// G=0x30ae1625; 
@property(readonly, assign, nonatomic) NSString *companyName;	// G=0x30ae1b35; 
@property(readonly, retain, nonatomic) NSString *displayName;	// G=0x30ae1681; 
@property(copy, nonatomic) NSArray *emails;	// G=0x30ae25d9; S=0x30ae26f9; 
@property(copy, nonatomic) NSString *firstName;	// G=0x30ae1ad5; S=0x30ae1bf5; 
@property(readonly, retain, nonatomic) NSString *fullName;	// G=0x30ae1c8d; 
@property(readonly, retain, nonatomic) NSArray *groups;	// G=0x30ae1339; 
@property(retain, nonatomic) NSData *imageData;	// G=0x30ae27ad; S=0x30ae2791; 
@property(readonly, assign, nonatomic) NSData *imageDataWithoutLoading;	// G=0x30ae1411; 
@property(readonly, assign, nonatomic) BOOL isCompany;	// G=0x30ae1b65; 
@property(readonly, assign, nonatomic) BOOL isInAddressBook;	// G=0x30ae274d; 
@property(copy, nonatomic) NSString *lastName;	// G=0x30ae1aa5; S=0x30ae1ba9; 
@property(readonly, assign, nonatomic) NSArray *mobileNumbers;	// G=0x30ae2331; 
@property(copy, nonatomic) NSString *nickname;	// G=0x30ae1b05; S=0x30ae1c41; 
@property(readonly, assign, nonatomic) NSArray *phoneNumbers;	// G=0x30ae23f9; 
@property(readonly, assign, nonatomic) unsigned status;	// G=0x30ae13f1; 
@property(readonly, assign, nonatomic) NSString *uniqueID;	// G=0x30ae270d; 
+ (id)allPeople;	// 0x30ae27d1
+ (id)existingABPersonForPerson:(id)person;	// 0x30ae133d
+ (id)existingABPersonWithFirstName:(id)firstName andLastName:(id)name orEmail:(id)email;	// 0x30ae1ced
+ (id)existingABPersonWithFirstName:(id)firstName lastName:(id)name;	// 0x30ae1ed1
+ (id)personWithRecordRef:(void *)recordRef;	// 0x30ae1851
- (id)init;	// 0x30ae17d9
- (id)initWithABRecordRef:(void *)abrecordRef;	// 0x30ae191d
- (void)_abPersonChanged:(id)changed;	// 0x30ae1425
- (id)_valuesAndLabelsForProperty:(id)property;	// 0x30ae15e9
// declared property getter: - (void *)abRecordRef;	// 0x30ae1325
// declared property getter: - (id)allEmails;	// 0x30ae1625
- (id)allHandlesForProperty:(id)property;	// 0x30ae15d5
- (void)appendID:(id)anId toProperty:(id)property;	// 0x30ae152d
// declared property getter: - (id)companyName;	// 0x30ae1b35
- (BOOL)containsHandle:(id)handle forServiceProperty:(id)serviceProperty;	// 0x30ae1501
- (void)dealloc;	// 0x30ae1a31
// declared property getter: - (id)displayName;	// 0x30ae1681
- (id)emailHandlesForService:(id)service;	// 0x30ae163d
- (id)emailHandlesForService:(id)service includeBaseEmail:(BOOL)email;	// 0x30ae1ff5
// declared property getter: - (id)emails;	// 0x30ae25d9
- (void)finalize;	// 0x30ae1775
// declared property getter: - (id)firstName;	// 0x30ae1ad5
// declared property getter: - (id)fullName;	// 0x30ae1c8d
// declared property getter: - (id)groups;	// 0x30ae1339
- (unsigned)hash;	// 0x30ae13cd
- (id)imHandleRegistrarGUID;	// 0x30adc801
// declared property getter: - (id)imageData;	// 0x30ae27ad
// declared property getter: - (id)imageDataWithoutLoading;	// 0x30ae1411
// declared property getter: - (BOOL)isCompany;	// 0x30ae1b65
- (BOOL)isEqual:(id)equal;	// 0x30ae145d
- (BOOL)isEqualToIMPerson:(id)imperson;	// 0x30ae14b9
// declared property getter: - (BOOL)isInAddressBook;	// 0x30ae274d
// declared property getter: - (id)lastName;	// 0x30ae1aa5
// declared property getter: - (id)mobileNumbers;	// 0x30ae2331
// declared property getter: - (id)nickname;	// 0x30ae1b05
// declared property getter: - (id)phoneNumbers;	// 0x30ae23f9
- (void)save;	// 0x30ae1335
// declared property setter: - (void)setEmails:(id)emails;	// 0x30ae26f9
// declared property setter: - (void)setFirstName:(id)name;	// 0x30ae1bf5
- (void)setFirstName:(id)name lastName:(id)name2;	// 0x30ae1655
// declared property setter: - (void)setImageData:(id)data;	// 0x30ae2791
// declared property setter: - (void)setLastName:(id)name;	// 0x30ae1ba9
// declared property setter: - (void)setNickname:(id)nickname;	// 0x30ae1c41
- (void)setValues:(id)values forIMProperty:(id)improperty;	// 0x30ae26e5
- (void)setValues:(id)values forProperty:(id)property;	// 0x30ae26a1
// declared property getter: - (unsigned)status;	// 0x30ae13f1
// declared property getter: - (id)uniqueID;	// 0x30ae270d
- (id)valuesForIMProperty:(id)improperty;	// 0x30ae1609
- (id)valuesForProperty:(id)property;	// 0x30ae24c1
@end
