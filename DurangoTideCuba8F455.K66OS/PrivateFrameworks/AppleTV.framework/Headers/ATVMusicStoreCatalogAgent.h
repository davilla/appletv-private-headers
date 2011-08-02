/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "ATVCatalogAgent.h"
#import "AppleTV-Structs.h"


@interface ATVMusicStoreCatalogAgent : NSObject <ATVCatalogAgent> {
}
+ (void)_augmentStoreOffers:(id)offers purchaseOfferParams:(id)params;	// 0x306713a9
+ (id)_backgroundGradientImageForItem:(id)item;	// 0x3066c1f9
+ (id)_backgroundImageForItem:(id)item;	// 0x3066c219
+ (id)_backgroundImageForItem:(id)item imageName:(id)name;	// 0x3066c025
+ (CGSize)_backgroundImageSizeForItem:(id)item inset:(float *)inset;	// 0x30672571
+ (void)_catalogControlRequestProcessed:(id)processed;	// 0x30670809
+ (id)_catalogPageControlForItem:(id)item;	// 0x3066ed55
+ (BOOL)_checkForPurchases:(id)purchases metadata:(id)metadata userInfo:(id)info;	// 0x3066cb55
+ (void)_checkForPurchasesComplete:(id)purchasesComplete;	// 0x3066ca49
+ (id)_collectionControlsForPageItem:(id)pageItem requestedBy:(id)by dividerSeparated:(BOOL)separated;	// 0x30671691
+ (id)_controlForItem:(id)item;	// 0x3066c5bd
+ (void)_controlForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x306715a1
+ (id)_controlForURL:(id)url identifier:(id)identifier merchant:(id)merchant;	// 0x3066c925
+ (id)_createItemTypeMap;	// 0x3066d999
+ (id)_firstControlOfType:(Class)type inArray:(id)array;	// 0x3066fac9
+ (id)_formattedPageContentCountString:(id)string;	// 0x30670d49
+ (id)_headerControlsForPageItem:(id)pageItem;	// 0x30671e69
+ (id)_listPageForItem:(id)item;	// 0x3066c425
+ (id)_mediaTypeForStoreLink:(id)storeLink;	// 0x3066cc51
+ (id)_mediaTypeForStoreMediaCollectionType:(id)storeMediaCollectionType;	// 0x3066ccad
+ (id)_mediaTypeForStoreMediaType:(id)storeMediaType;	// 0x3066ce11
+ (id)_moreInfoHeaderControlsForPageItem:(id)pageItem;	// 0x30671c35
+ (void)_playEventMediaAsset:(id)asset swapCatalogApplianceController:(BOOL)controller;	// 0x3066ef8d
+ (void)_playVideoClip:(id)clip;	// 0x3066f245
+ (void)_popToItemController:(id)itemController;	// 0x3066cf95
+ (id)_roomDescriptionControlsForPageItem:(id)pageItem;	// 0x30672ba9
+ (id)_roomPageContainerForItem:(id)item withScroller:(id)scroller;	// 0x306721b5
+ (id)_roomPageForItem:(id)item;	// 0x3066c2c1
+ (id)_scrollerControlsFromHeaderControls:(id)headerControls collectionControls:(id)controls;	// 0x3066c239
+ (id)_setupScroller;	// 0x30671b0d
+ (id)_supplementPageForItem:(id)item;	// 0x3066c511
+ (id)_tabbedPageForItem:(id)item;	// 0x306726a5
+ (void)acquireItem:(id)item;	// 0x3066e829
+ (id)allLeafItemsForItem:(id)item;	// 0x306704a9
+ (void)augmentPageDictionaryWithPurchases:(id)purchases purchaseCheckResponse:(id)response;	// 0x3066fb71
+ (id)catalogHandler;	// 0x3066ec89
+ (void)checkForPurchases;	// 0x3066df3d
+ (id)checkForPurchasesRequestForPageDictionary:(id)pageDictionary;	// 0x3066fef5
+ (id)configureRelatedControlsFromControl:(id)control style:(int)style;	// 0x30670295
+ (id)controlForItem:(id)item;	// 0x3066dbd1
+ (void)controlForObject:(id)object;	// 0x3066dbe5
+ (id)controlForObject:(id)object merchant:(id)merchant;	// 0x3066f6f1
+ (id)coverArtForItem:(id)item;	// 0x3067063d
+ (id)coverArtURLForItem:(id)item featured:(BOOL)featured thumbnail:(BOOL)thumbnail;	// 0x3066d339
+ (long)downloadItem:(id)item;	// 0x3066f5d5
+ (id)episodeArtURLForItem:(id)item;	// 0x3066d2e5
+ (void)initialize;	// 0x3066e9e1
+ (BOOL)isItemFeatured:(id)featured;	// 0x3066d279
+ (BOOL)isItemOrdered:(id)ordered;	// 0x3066d255
+ (BOOL)isPurchaseAllowedForItem:(id)item;	// 0x3066df75
+ (BOOL)isTemplateParameterSet:(id)set forItem:(id)item;	// 0x3066d1a1
+ (long)itemIDForItem:(id)item;	// 0x3066f4bd
+ (int)itemType:(id)type;	// 0x3066f9dd
+ (id)mediaAssetForStoreOffer:(id)storeOffer;	// 0x3066d401
+ (id)mediaTypeForItem:(id)item;	// 0x3066d8e1
+ (void)playItem:(id)item;	// 0x30670c6d
+ (void)playStoreItem:(id)item;	// 0x3066d05d
+ (id)plistFromURLDocument:(id)urldocument;	// 0x3066d045
+ (void)registerClass:(Class)aClass withTemplateName:(id)templateName;	// 0x3066de45
+ (void)sendPingForItem:(id)item;	// 0x3066dd09
+ (void)setDownloadFunction:(/*function-pointer*/ void *)function;	// 0x3066afd1
+ (void)setPurchaseFunction:(/*function-pointer*/ void *)function;	// 0x3066afad
+ (void)setRentalFunction:(/*function-pointer*/ void *)function;	// 0x3066afb9
+ (void)setSubscribeFunction:(/*function-pointer*/ void *)function;	// 0x3066afc5
+ (BOOL)showAllTitles:(id)titles;	// 0x3066d2c1
+ (BOOL)showTitleAndSubtitle:(id)subtitle;	// 0x3066d29d
+ (BOOL)storeVersionIsCompatibileForPageDictionary:(id)pageDictionary redirectURL:(id *)url;	// 0x3066dc1d
+ (void)subscribeToItem:(id)item;	// 0x3066f6d5
@end

