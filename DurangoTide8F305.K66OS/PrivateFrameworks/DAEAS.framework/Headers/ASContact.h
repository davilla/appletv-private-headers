/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "DADataElement.h"
#import "ASChangedCollectionLeaf.h"

@class NSArray, NSString, NSDate;

@interface ASContact : ASChangedCollectionLeaf <DADataElement> {
	void *_abRecord;	// 64 = 0x40
	NSDate *_anniversary;	// 68 = 0x44
	NSString *_assistantName;	// 72 = 0x48
	NSString *_assistantTelephoneNumber;	// 76 = 0x4c
	NSDate *_birthday;	// 80 = 0x50
	NSString *_body;	// 84 = 0x54
	int _bodySize;	// 88 = 0x58
	BOOL _bodyTruncated;	// 92 = 0x5c
	NSString *_business2TelephoneNumber;	// 96 = 0x60
	NSString *_businessAddressCity;	// 100 = 0x64
	NSString *_businessAddressCountry;	// 104 = 0x68
	NSString *_businessAddressPostalCode;	// 108 = 0x6c
	NSString *_businessAddressState;	// 112 = 0x70
	NSString *_businessAddressStreet;	// 116 = 0x74
	NSString *_businessFaxNumber;	// 120 = 0x78
	NSString *_businessTelephoneNumber;	// 124 = 0x7c
	NSString *_carTelephoneNumber;	// 128 = 0x80
	NSArray *_categories;	// 132 = 0x84
	NSArray *_children;	// 136 = 0x88
	NSString *_companyName;	// 140 = 0x8c
	NSString *_department;	// 144 = 0x90
	NSString *_email1Address;	// 148 = 0x94
	NSString *_email2Address;	// 152 = 0x98
	NSString *_email3Address;	// 156 = 0x9c
	NSString *_fileAs;	// 160 = 0xa0
	NSString *_firstName;	// 164 = 0xa4
	NSString *_home2TelephoneNumber;	// 168 = 0xa8
	NSString *_homeAddressCity;	// 172 = 0xac
	NSString *_homeAddressCountry;	// 176 = 0xb0
	NSString *_homeAddressPostalCode;	// 180 = 0xb4
	NSString *_homeAddressState;	// 184 = 0xb8
	NSString *_homeAddressStreet;	// 188 = 0xbc
	NSString *_homeFaxNumber;	// 192 = 0xc0
	NSString *_homeTelephoneNumber;	// 196 = 0xc4
	NSString *_jobTitle;	// 200 = 0xc8
	NSString *_lastName;	// 204 = 0xcc
	NSString *_middleName;	// 208 = 0xd0
	NSString *_mobileTelephoneNumber;	// 212 = 0xd4
	NSString *_officeLocation;	// 216 = 0xd8
	NSString *_otherAddressCity;	// 220 = 0xdc
	NSString *_otherAddressCountry;	// 224 = 0xe0
	NSString *_otherAddressPostalCode;	// 228 = 0xe4
	NSString *_otherAddressState;	// 232 = 0xe8
	NSString *_otherAddressStreet;	// 236 = 0xec
	NSString *_pagerNumber;	// 240 = 0xf0
	NSString *_picture;	// 244 = 0xf4
	NSString *_radioTelephoneNumber;	// 248 = 0xf8
	NSString *_spouse;	// 252 = 0xfc
	NSString *_suffix;	// 256 = 0x100
	NSString *_title;	// 260 = 0x104
	NSString *_webpage;	// 264 = 0x108
	NSString *_yomiCompanyName;	// 268 = 0x10c
	NSString *_yomiFirstName;	// 272 = 0x110
	NSString *_yomiLastName;	// 276 = 0x114
	NSString *_customerID;	// 280 = 0x118
	NSString *_governmentID;	// 284 = 0x11c
	NSString *_im1Address;	// 288 = 0x120
	NSString *_im2Address;	// 292 = 0x124
	NSString *_im3Address;	// 296 = 0x128
	NSString *_managerName;	// 300 = 0x12c
	NSString *_companyMainPhone;	// 304 = 0x130
	NSString *_accountName;	// 308 = 0x134
	NSString *_nickName;	// 312 = 0x138
	NSString *_mms;	// 316 = 0x13c
	int _fileAsAutoConstruction;	// 320 = 0x140
}
@property(retain) NSString *accountName;	// G=0x30315759; S=0x3031616d; @synthesize=_accountName
@property(retain) NSDate *anniversary;	// G=0x303151e9; S=0x303157a1; @synthesize=_anniversary
@property(retain) NSString *assistantName;	// G=0x30315201; S=0x303157cd; @synthesize=_assistantName
@property(retain) NSString *assistantTelephoneNumber;	// G=0x30315219; S=0x303157f9; @synthesize=_assistantTelephoneNumber
@property(retain) NSDate *birthday;	// G=0x30315231; S=0x30315825; @synthesize=_birthday
@property(retain) NSString *body;	// G=0x30315249; S=0x3030cf71; @synthesize=_body
@property(assign) int bodySize;	// G=0x3030cc29; S=0x3030cc39; @synthesize=_bodySize
@property(assign) BOOL bodyTruncated;	// G=0x3030cc09; S=0x3030cc19; @synthesize=_bodyTruncated
@property(retain) NSString *business2TelephoneNumber;	// G=0x30315261; S=0x30315851; @synthesize=_business2TelephoneNumber
@property(retain) NSString *businessAddressCity;	// G=0x30315279; S=0x3031587d; @synthesize=_businessAddressCity
@property(retain) NSString *businessAddressCountry;	// G=0x30315291; S=0x303158a9; @synthesize=_businessAddressCountry
@property(retain) NSString *businessAddressPostalCode;	// G=0x303152a9; S=0x303158d5; @synthesize=_businessAddressPostalCode
@property(retain) NSString *businessAddressState;	// G=0x303152c1; S=0x30315901; @synthesize=_businessAddressState
@property(retain) NSString *businessAddressStreet;	// G=0x303152d9; S=0x3031592d; @synthesize=_businessAddressStreet
@property(retain) NSString *businessFaxNumber;	// G=0x303152f1; S=0x30315959; @synthesize=_businessFaxNumber
@property(retain) NSString *businessTelephoneNumber;	// G=0x30315309; S=0x30315985; @synthesize=_businessTelephoneNumber
@property(retain) NSString *carTelephoneNumber;	// G=0x30315351; S=0x30315a09; @synthesize=_carTelephoneNumber
@property(retain) NSArray *categories;	// G=0x30315321; S=0x303159b1; @synthesize=_categories
@property(retain) NSArray *children;	// G=0x30315339; S=0x303159dd; @synthesize=_children
@property(retain) NSString *companyMainPhone;	// G=0x30315741; S=0x30316141; @synthesize=_companyMainPhone
@property(retain) NSString *companyName;	// G=0x30315369; S=0x30315a35; @synthesize=_companyName
@property(retain) NSString *customerID;	// G=0x303156b1; S=0x30316039; @synthesize=_customerID
@property(retain) NSString *department;	// G=0x30315381; S=0x30315a61; @synthesize=_department
@property(retain) NSString *email1Address;	// G=0x30315399; S=0x30315a8d; @synthesize=_email1Address
@property(retain) NSString *email2Address;	// G=0x303153b1; S=0x30315ab9; @synthesize=_email2Address
@property(retain) NSString *email3Address;	// G=0x303153c9; S=0x30315ae5; @synthesize=_email3Address
@property(retain) NSString *fileAs;	// G=0x303153e1; S=0x30315b11; @synthesize=_fileAs
@property(retain) NSString *firstName;	// G=0x303153f9; S=0x30315b3d; @synthesize=_firstName
@property(retain) NSString *governmentID;	// G=0x303156c9; S=0x30316065; @synthesize=_governmentID
@property(retain) NSString *home2TelephoneNumber;	// G=0x30315411; S=0x30315b69; @synthesize=_home2TelephoneNumber
@property(retain) NSString *homeAddressCity;	// G=0x30315429; S=0x30315b95; @synthesize=_homeAddressCity
@property(retain) NSString *homeAddressCountry;	// G=0x30315441; S=0x30315bc1; @synthesize=_homeAddressCountry
@property(retain) NSString *homeAddressPostalCode;	// G=0x30315459; S=0x30315bed; @synthesize=_homeAddressPostalCode
@property(retain) NSString *homeAddressState;	// G=0x30315471; S=0x30315c19; @synthesize=_homeAddressState
@property(retain) NSString *homeAddressStreet;	// G=0x30315489; S=0x30315c45; @synthesize=_homeAddressStreet
@property(retain) NSString *homeFaxNumber;	// G=0x303154b9; S=0x30315c9d; @synthesize=_homeFaxNumber
@property(retain) NSString *homeTelephoneNumber;	// G=0x303154a1; S=0x30315c71; @synthesize=_homeTelephoneNumber
@property(retain) NSString *im1Address;	// G=0x303156e1; S=0x30316091; @synthesize=_im1Address
@property(retain) NSString *im2Address;	// G=0x303156f9; S=0x303160bd; @synthesize=_im2Address
@property(retain) NSString *im3Address;	// G=0x30315711; S=0x303160e9; @synthesize=_im3Address
@property(retain) NSString *jobTitle;	// G=0x303154d1; S=0x30315cc9; @synthesize=_jobTitle
@property(retain) NSString *lastName;	// G=0x303154e9; S=0x30315cf5; @synthesize=_lastName
@property(retain) NSString *managerName;	// G=0x30315729; S=0x30316115; @synthesize=_managerName
@property(retain) NSString *middleName;	// G=0x30315501; S=0x30315d21; @synthesize=_middleName
@property(retain) NSString *mms;	// G=0x30315789; S=0x303161c5; @synthesize=_mms
@property(retain) NSString *mobileTelephoneNumber;	// G=0x30315519; S=0x30315d4d; @synthesize=_mobileTelephoneNumber
@property(retain) NSString *nickName;	// G=0x30315771; S=0x30316199; @synthesize=_nickName
@property(retain) NSString *officeLocation;	// G=0x30315531; S=0x30315d79; @synthesize=_officeLocation
@property(retain) NSString *otherAddressCity;	// G=0x30315549; S=0x30315da5; @synthesize=_otherAddressCity
@property(retain) NSString *otherAddressCountry;	// G=0x30315561; S=0x30315dd1; @synthesize=_otherAddressCountry
@property(retain) NSString *otherAddressPostalCode;	// G=0x30315579; S=0x30315dfd; @synthesize=_otherAddressPostalCode
@property(retain) NSString *otherAddressState;	// G=0x30315591; S=0x30315e29; @synthesize=_otherAddressState
@property(retain) NSString *otherAddressStreet;	// G=0x303155a9; S=0x30315e55; @synthesize=_otherAddressStreet
@property(retain) NSString *pagerNumber;	// G=0x303155c1; S=0x30315e81; @synthesize=_pagerNumber
@property(retain) NSString *picture;	// G=0x303155d9; S=0x30315ead; @synthesize=_picture
@property(retain) NSString *radioTelephoneNumber;	// G=0x303155f1; S=0x30315ed9; @synthesize=_radioTelephoneNumber
@property(retain) NSString *spouse;	// G=0x30315609; S=0x30315f05; @synthesize=_spouse
@property(retain) NSString *suffix;	// G=0x30315621; S=0x30315f31; @synthesize=_suffix
@property(retain) NSString *title;	// G=0x30315639; S=0x30315f5d; @synthesize=_title
@property(retain) NSString *webpage;	// G=0x30315651; S=0x30315f89; @synthesize=_webpage
@property(retain) NSString *yomiCompanyName;	// G=0x30315669; S=0x30315fb5; @synthesize=_yomiCompanyName
@property(retain) NSString *yomiFirstName;	// G=0x30315681; S=0x30315fe1; @synthesize=_yomiFirstName
@property(retain) NSString *yomiLastName;	// G=0x30315699; S=0x3031600d; @synthesize=_yomiLastName
+ (void)_setSystemTimeZoneForUnitTests:(id)unitTests;	// 0x3030f7b9
+ (BOOL)acceptsTopLevelLeaves;	// 0x3030f90d
+ (id)contactWithABRecord:(void *)abrecord serverID:(id)anId;	// 0x3030eedd
+ (BOOL)frontingBasicTypes;	// 0x3030f835
+ (BOOL)notifyOfUnknownTokens;	// 0x3030f7ed
+ (BOOL)parsingLeafNode;	// 0x3030f8c5
+ (BOOL)parsingWithSubItems;	// 0x3030f87d
- (id)initWithABRecord:(void *)abrecord serverID:(id)anId;	// 0x3030fa89
- (id)initWithCoder:(id)coder;	// 0x3030cef5
- (void)_detectFileAsAutoConstruction;	// 0x3030ef15
- (void)_loadAttributesFromABRecord:(void *)abrecord;	// 0x3031170d
- (void)_reconstructFileAsField;	// 0x30310e3d
- (BOOL)_saveDatesToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x30312809
- (BOOL)_saveEmailsToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x30313c25
- (BOOL)_saveExternalRepToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties storeExternalRep:(BOOL)rep;	// 0x30311b85
- (BOOL)_saveIMsToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x30313911
- (BOOL)_savePhoneNumbersToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x30313f15
- (BOOL)_saveRelatedNamesToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x30312619
- (BOOL)_saveStreetAddressesToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x30312199
- (BOOL)_saveURLsToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x30312049
- (BOOL)_setDatesWithExistingRecord:(void *)existingRecord;	// 0x30310d35
- (BOOL)_setEmailsWithExistingRecord:(void *)existingRecord;	// 0x3031051d
- (BOOL)_setExternalRepWithExistingRecord:(void *)existingRecord;	// 0x3031130d
- (BOOL)_setIMsWithExistingRecord:(void *)existingRecord;	// 0x30310371
- (void)_setImageOnContactFromPerson:(void *)person;	// 0x3030fe31
- (BOOL)_setPhoneNumbersWithExistingRecord:(void *)existingRecord;	// 0x303108f9
- (BOOL)_setRelatedNamesWithExistingRecord:(void *)existingRecord;	// 0x30310c15
- (BOOL)_setStreetAddressesWithExistingRecord:(void *)existingRecord;	// 0x303105cd
- (BOOL)_setURLsWithExistingRecord:(void *)existingRecord;	// 0x30310459
- (id)_transformedDateForABFramework:(id)abframework;	// 0x3030f781
- (id)_transformedDateForActiveSync:(id)activeSync;	// 0x3030f6f1
// declared property getter: - (id)accountName;	// 0x30315759
// declared property getter: - (id)anniversary;	// 0x303151e9
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x30312965
- (id)asParseRules;	// 0x3030faf5
// declared property getter: - (id)assistantName;	// 0x30315201
// declared property getter: - (id)assistantTelephoneNumber;	// 0x30315219
// declared property getter: - (id)birthday;	// 0x30315231
// declared property getter: - (id)body;	// 0x30315249
// declared property getter: - (int)bodySize;	// 0x3030cc29
// declared property getter: - (BOOL)bodyTruncated;	// 0x3030cc09
// declared property getter: - (id)business2TelephoneNumber;	// 0x30315261
// declared property getter: - (id)businessAddressCity;	// 0x30315279
// declared property getter: - (id)businessAddressCountry;	// 0x30315291
// declared property getter: - (id)businessAddressPostalCode;	// 0x303152a9
// declared property getter: - (id)businessAddressState;	// 0x303152c1
// declared property getter: - (id)businessAddressStreet;	// 0x303152d9
// declared property getter: - (id)businessFaxNumber;	// 0x303152f1
// declared property getter: - (id)businessTelephoneNumber;	// 0x30315309
// declared property getter: - (id)carTelephoneNumber;	// 0x30315351
// declared property getter: - (id)categories;	// 0x30315321
// declared property getter: - (id)children;	// 0x30315339
// declared property getter: - (id)companyMainPhone;	// 0x30315741
// declared property getter: - (id)companyName;	// 0x30315369
// declared property getter: - (id)customerID;	// 0x303156b1
- (int)dataclass;	// 0x3030cc01
- (void)dealloc;	// 0x3030fed9
- (BOOL)deleteFromAddressBook;	// 0x30314fd5
- (BOOL)deleteFromContainer:(void *)container;	// 0x3030cdb1
// declared property getter: - (id)department;	// 0x30315381
- (id)description;	// 0x3031507d
// declared property getter: - (id)email1Address;	// 0x30315399
// declared property getter: - (id)email2Address;	// 0x303153b1
// declared property getter: - (id)email3Address;	// 0x303153c9
- (void)encodeWithCoder:(id)coder;	// 0x3030ce79
// declared property getter: - (id)fileAs;	// 0x303153e1
// declared property getter: - (id)firstName;	// 0x303153f9
// declared property getter: - (id)governmentID;	// 0x303156c9
// declared property getter: - (id)home2TelephoneNumber;	// 0x30315411
// declared property getter: - (id)homeAddressCity;	// 0x30315429
// declared property getter: - (id)homeAddressCountry;	// 0x30315441
// declared property getter: - (id)homeAddressPostalCode;	// 0x30315459
// declared property getter: - (id)homeAddressState;	// 0x30315471
// declared property getter: - (id)homeAddressStreet;	// 0x30315489
// declared property getter: - (id)homeFaxNumber;	// 0x303154b9
// declared property getter: - (id)homeTelephoneNumber;	// 0x303154a1
// declared property getter: - (id)im1Address;	// 0x303156e1
// declared property getter: - (id)im2Address;	// 0x303156f9
// declared property getter: - (id)im3Address;	// 0x30315711
// declared property getter: - (id)jobTitle;	// 0x303154d1
// declared property getter: - (id)lastName;	// 0x303154e9
- (BOOL)loadABRecord;	// 0x30314e69
- (void)loadClientIDs;	// 0x303116a9
- (BOOL)loadLocalItemWithAccount:(id)account;	// 0x3030cde1
// declared property getter: - (id)managerName;	// 0x30315729
// declared property getter: - (id)middleName;	// 0x30315501
// declared property getter: - (id)mms;	// 0x30315789
// declared property getter: - (id)mobileTelephoneNumber;	// 0x30315519
// declared property getter: - (id)nickName;	// 0x30315771
// declared property getter: - (id)officeLocation;	// 0x30315531
// declared property getter: - (id)otherAddressCity;	// 0x30315549
// declared property getter: - (id)otherAddressCountry;	// 0x30315561
// declared property getter: - (id)otherAddressPostalCode;	// 0x30315579
// declared property getter: - (id)otherAddressState;	// 0x30315591
// declared property getter: - (id)otherAddressStreet;	// 0x303155a9
// declared property getter: - (id)pagerNumber;	// 0x303155c1
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x3030fa01
// declared property getter: - (id)picture;	// 0x303155d9
- (void)postProcessApplicationData;	// 0x3030d02d
// declared property getter: - (id)radioTelephoneNumber;	// 0x303155f1
- (BOOL)saveAfterMapWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x3030cc05
- (BOOL)saveServerIDToContact;	// 0x30311b45
- (BOOL)saveServerIDToExistingItem;	// 0x3030cdc9
- (BOOL)saveToAddressBookWithExistingRecord:(void *)existingRecord inSource:(void *)source shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge storeExternalRep:(BOOL)rep;	// 0x303146d5
- (BOOL)saveWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x3030ce0d
- (void)setABRecord:(void *)record;	// 0x30314e2d
// declared property setter: - (void)setAccountName:(id)name;	// 0x3031616d
// declared property setter: - (void)setAnniversary:(id)anniversary;	// 0x303157a1
// declared property setter: - (void)setAssistantName:(id)name;	// 0x303157cd
// declared property setter: - (void)setAssistantTelephoneNumber:(id)number;	// 0x303157f9
// declared property setter: - (void)setBirthday:(id)birthday;	// 0x30315825
// declared property setter: - (void)setBody:(id)body;	// 0x3030cf71
// declared property setter: - (void)setBodySize:(int)size;	// 0x3030cc39
- (void)setBodySizeNumber:(id)number;	// 0x3030d001
// declared property setter: - (void)setBodyTruncated:(BOOL)truncated;	// 0x3030cc19
- (void)setBodyTruncatedNumber:(id)number;	// 0x3030cfd5
// declared property setter: - (void)setBusiness2TelephoneNumber:(id)number;	// 0x30315851
// declared property setter: - (void)setBusinessAddressCity:(id)city;	// 0x3031587d
// declared property setter: - (void)setBusinessAddressCountry:(id)country;	// 0x303158a9
// declared property setter: - (void)setBusinessAddressPostalCode:(id)code;	// 0x303158d5
// declared property setter: - (void)setBusinessAddressState:(id)state;	// 0x30315901
// declared property setter: - (void)setBusinessAddressStreet:(id)street;	// 0x3031592d
// declared property setter: - (void)setBusinessFaxNumber:(id)number;	// 0x30315959
// declared property setter: - (void)setBusinessTelephoneNumber:(id)number;	// 0x30315985
// declared property setter: - (void)setCarTelephoneNumber:(id)number;	// 0x30315a09
// declared property setter: - (void)setCategories:(id)categories;	// 0x303159b1
// declared property setter: - (void)setChildren:(id)children;	// 0x303159dd
// declared property setter: - (void)setCompanyMainPhone:(id)phone;	// 0x30316141
// declared property setter: - (void)setCompanyName:(id)name;	// 0x30315a35
// declared property setter: - (void)setCustomerID:(id)anId;	// 0x30316039
// declared property setter: - (void)setDepartment:(id)department;	// 0x30315a61
// declared property setter: - (void)setEmail1Address:(id)address;	// 0x30315a8d
// declared property setter: - (void)setEmail2Address:(id)address;	// 0x30315ab9
// declared property setter: - (void)setEmail3Address:(id)address;	// 0x30315ae5
- (void)setEmailFromAppData:(int)appData setter:(SEL)setter;	// 0x3030ee39
// declared property setter: - (void)setFileAs:(id)as;	// 0x30315b11
// declared property setter: - (void)setFirstName:(id)name;	// 0x30315b3d
// declared property setter: - (void)setGovernmentID:(id)anId;	// 0x30316065
// declared property setter: - (void)setHome2TelephoneNumber:(id)number;	// 0x30315b69
// declared property setter: - (void)setHomeAddressCity:(id)city;	// 0x30315b95
// declared property setter: - (void)setHomeAddressCountry:(id)country;	// 0x30315bc1
// declared property setter: - (void)setHomeAddressPostalCode:(id)code;	// 0x30315bed
// declared property setter: - (void)setHomeAddressState:(id)state;	// 0x30315c19
// declared property setter: - (void)setHomeAddressStreet:(id)street;	// 0x30315c45
// declared property setter: - (void)setHomeFaxNumber:(id)number;	// 0x30315c9d
// declared property setter: - (void)setHomeTelephoneNumber:(id)number;	// 0x30315c71
// declared property setter: - (void)setIm1Address:(id)address;	// 0x30316091
// declared property setter: - (void)setIm2Address:(id)address;	// 0x303160bd
// declared property setter: - (void)setIm3Address:(id)address;	// 0x303160e9
// declared property setter: - (void)setJobTitle:(id)title;	// 0x30315cc9
// declared property setter: - (void)setLastName:(id)name;	// 0x30315cf5
- (void)setLocalItem:(void *)item;	// 0x3030cdf9
// declared property setter: - (void)setManagerName:(id)name;	// 0x30316115
// declared property setter: - (void)setMiddleName:(id)name;	// 0x30315d21
// declared property setter: - (void)setMms:(id)mms;	// 0x303161c5
// declared property setter: - (void)setMobileTelephoneNumber:(id)number;	// 0x30315d4d
// declared property setter: - (void)setNickName:(id)name;	// 0x30316199
// declared property setter: - (void)setOfficeLocation:(id)location;	// 0x30315d79
// declared property setter: - (void)setOtherAddressCity:(id)city;	// 0x30315da5
// declared property setter: - (void)setOtherAddressCountry:(id)country;	// 0x30315dd1
// declared property setter: - (void)setOtherAddressPostalCode:(id)code;	// 0x30315dfd
// declared property setter: - (void)setOtherAddressState:(id)state;	// 0x30315e29
// declared property setter: - (void)setOtherAddressStreet:(id)street;	// 0x30315e55
// declared property setter: - (void)setPagerNumber:(id)number;	// 0x30315e81
// declared property setter: - (void)setPicture:(id)picture;	// 0x30315ead
// declared property setter: - (void)setRadioTelephoneNumber:(id)number;	// 0x30315ed9
// declared property setter: - (void)setSpouse:(id)spouse;	// 0x30315f05
// declared property setter: - (void)setSuffix:(id)suffix;	// 0x30315f31
// declared property setter: - (void)setTitle:(id)title;	// 0x30315f5d
// declared property setter: - (void)setWebpage:(id)webpage;	// 0x30315f89
// declared property setter: - (void)setYomiCompanyName:(id)name;	// 0x30315fb5
// declared property setter: - (void)setYomiFirstName:(id)name;	// 0x30315fe1
// declared property setter: - (void)setYomiLastName:(id)name;	// 0x3031600d
// declared property getter: - (id)spouse;	// 0x30315609
// declared property getter: - (id)suffix;	// 0x30315621
// declared property getter: - (id)title;	// 0x30315639
// declared property getter: - (id)webpage;	// 0x30315651
// declared property getter: - (id)yomiCompanyName;	// 0x30315669
// declared property getter: - (id)yomiFirstName;	// 0x30315681
// declared property getter: - (id)yomiLastName;	// 0x30315699
@end

