/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class ASFolderItemsSyncResponse, NSArray, NSNumber, NSString;

@interface ASCollection : ASItem {
	int _dataclass;	// 40 = 0x28
	NSString *_syncKey;	// 44 = 0x2c
	NSString *_collectionId;	// 48 = 0x30
	NSNumber *_status;	// 52 = 0x34
	NSNumber *_moreAvailable;	// 56 = 0x38
	NSArray *_changedItems;	// 60 = 0x3c
	NSArray *_responseItems;	// 64 = 0x40
	ASFolderItemsSyncResponse *_parentResponse;	// 68 = 0x44
	int _sniffableType;	// 72 = 0x48
	BOOL _checkedShouldSniffInvites;	// 76 = 0x4c
}
@property(retain) NSArray *changedItems;	// G=0x3030c315; S=0x3030c2d9; converted property
@property(retain) NSString *collectionId;	// G=0x3030b3d9; S=0x3030b39d; converted property
@property(readonly, assign) int dataclass;	// G=0x3030c3c5; converted property
@property(retain) NSNumber *moreAvailable;	// G=0x3030b301; S=0x3030b2c5; converted property
@property(retain) NSArray *responseItems;	// G=0x3030c2a9; S=0x3030c26d; converted property
@property(retain) NSNumber *status;	// G=0x3030b36d; S=0x3030b331; converted property
@property(retain) NSString *syncKey;	// G=0x3030b445; S=0x3030b409; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x3030c665
+ (BOOL)frontingBasicTypes;	// 0x3030c58d
+ (BOOL)notifyOfUnknownTokens;	// 0x3030c545
+ (BOOL)parsingLeafNode;	// 0x3030c61d
+ (BOOL)parsingWithSubItems;	// 0x3030c5d5
- (id)init;	// 0x3030b27d
- (id)asParseRules;	// 0x3030b4e1
// converted property getter: - (id)changedItems;	// 0x3030c315
// converted property getter: - (id)collectionId;	// 0x3030b3d9
// converted property getter: - (int)dataclass;	// 0x3030c3c5
- (void)dealloc;	// 0x3030c4a1
- (id)description;	// 0x3030c7a1
// converted property getter: - (id)moreAvailable;	// 0x3030b301
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x3030c6ad
// converted property getter: - (id)responseItems;	// 0x3030c2a9
// converted property setter: - (void)setChangedItems:(id)items;	// 0x3030c2d9
// converted property setter: - (void)setCollectionId:(id)anId;	// 0x3030b39d
- (void)setDataclassString:(id)string;	// 0x3030c345
// converted property setter: - (void)setMoreAvailable:(id)available;	// 0x3030b2c5
- (void)setParentResponse:(id)response;	// 0x3030b26d
// converted property setter: - (void)setResponseItems:(id)items;	// 0x3030c26d
// converted property setter: - (void)setStatus:(id)status;	// 0x3030b331
// converted property setter: - (void)setSyncKey:(id)key;	// 0x3030b409
- (int)sniffableTypeForAccount:(id)account;	// 0x3030b475
// converted property getter: - (id)status;	// 0x3030b36d
// converted property getter: - (id)syncKey;	// 0x3030b445
@end

