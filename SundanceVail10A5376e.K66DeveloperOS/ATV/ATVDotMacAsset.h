/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRPhotoMediaAsset.h"

@class ATVDotMacSecondaryAccount, NSString;

__attribute__((visibility("hidden")))
@interface ATVDotMacAsset : BRPhotoMediaAsset {
	NSString *_parentAccountName;	// 40 = 0x28
	NSString *_parentCollectionIdentifier;	// 44 = 0x2c
	ATVDotMacSecondaryAccount *_secondaryAccount;	// 48 = 0x30
	NSString *_dotMacIdentifier;	// 52 = 0x34
	NSString *_dateString;	// 56 = 0x38
}
@property(retain) NSString *dotMacIdentifier;	// G=0x18cab9; S=0x18cb95; converted property
@property(retain) NSString *parentAccountName;	// G=0x18c731; S=0x18c80d; converted property
@property(retain) NSString *parentCollectionIdentifier;	// G=0x18c8f5; S=0x18c9d1; converted property
@property(retain) ATVDotMacSecondaryAccount *secondaryAccount;	// G=0x18c56d; S=0x18c649; converted property
+ (id)assetWithParentAccountName:(id)parentAccountName parentCollectionIdentifier:(id)identifier secondaryAccount:(id)account assetInfo:(id)info;	// 0x18c32d
- (id)initWithParentAccountName:(id)parentAccountName parentCollectionIdentifier:(id)identifier secondaryAccount:(id)account assetInfo:(id)info;	// 0x18c385
- (void)configureWithAssetInfo:(id)assetInfo;	// 0x18cdb1
- (id)dateTaken;	// 0x18cc7d
- (void)dealloc;	// 0x18c48d
// converted property getter: - (id)dotMacIdentifier;	// 0x18cab9
- (id)imageProxy;	// 0x18c54d
- (BOOL)isLocal;	// 0x18c52d
- (id)mediaType;	// 0x18c531
// converted property getter: - (id)parentAccountName;	// 0x18c731
// converted property getter: - (id)parentCollectionIdentifier;	// 0x18c8f5
// converted property getter: - (id)secondaryAccount;	// 0x18c56d
// converted property setter: - (void)setDotMacIdentifier:(id)identifier;	// 0x18cb95
// converted property setter: - (void)setParentAccountName:(id)name;	// 0x18c80d
// converted property setter: - (void)setParentCollectionIdentifier:(id)identifier;	// 0x18c9d1
// converted property setter: - (void)setSecondaryAccount:(id)account;	// 0x18c649
@end
