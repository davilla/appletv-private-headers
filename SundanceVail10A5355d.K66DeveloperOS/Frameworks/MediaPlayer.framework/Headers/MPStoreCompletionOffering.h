/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"

@class NSDictionary, MPMediaQuery, MPStoreCollectionCompletionOffering, MPStoreLinkCompletionOffering;

@interface MPStoreCompletionOffering : NSObject <NSCopying> {
	int _preferredStoreOfferVariant;	// 4 = 0x4
	NSDictionary *_responseCollectionDictionary;	// 8 = 0x8
	MPMediaQuery *_localItemsQuery;	// 12 = 0xc
	MPStoreCollectionCompletionOffering *_purchaseableCollectionOffering;	// 16 = 0x10
	MPStoreLinkCompletionOffering *_linkOffering;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) MPStoreLinkCompletionOffering *linkOffering;	// G=0x3378a4d5; @synthesize=_linkOffering
@property(assign, nonatomic) int preferredStoreOfferVariant;	// G=0x3378a4c5; S=0x3378a45d; 
@property(retain, nonatomic) MPStoreCollectionCompletionOffering *purchaseableCollectionOffering;	// G=0x3378a419; S=0x3378a4e5; @synthesize=_purchaseableCollectionOffering
+ (int)defaultOfferVariant;	// 0x33789b81
+ (id)offeringWithCollectionResponseDictionary:(id)collectionResponseDictionary localItemsQuery:(id)query;	// 0x33789b91
+ (void)setDefaultOfferVariant:(int)variant;	// 0x33789b71
- (id)initWithCollectionResponseDictionary:(id)collectionResponseDictionary localItemsQuery:(id)query;	// 0x33789bd1
- (id)_getPurchaseableCollectionOffering;	// 0x33789f55
- (id)copyByInvalidatingCalculatedContent;	// 0x33789f25
- (id)copyWithZone:(NSZone *)zone;	// 0x33789e6d
- (void)dealloc;	// 0x33789de1
// declared property getter: - (id)linkOffering;	// 0x3378a4d5
// declared property getter: - (int)preferredStoreOfferVariant;	// 0x3378a4c5
// declared property getter: - (id)purchaseableCollectionOffering;	// 0x3378a419
// declared property setter: - (void)setPreferredStoreOfferVariant:(int)variant;	// 0x3378a45d
// declared property setter: - (void)setPurchaseableCollectionOffering:(id)offering;	// 0x3378a4e5
@end

