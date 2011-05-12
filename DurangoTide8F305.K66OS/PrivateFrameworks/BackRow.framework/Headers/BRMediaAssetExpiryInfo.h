/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@protocol BRMediaAsset;

@interface BRMediaAssetExpiryInfo : NSObject {
@private
	id<BRMediaAsset> _mediaAsset;	// 4 = 0x4
}
@property(retain) id expiryDate;	// G=0x3291e9e9; S=0x329bc761; converted property
+ (id)expiryInfoForMediaAsset:(id)mediaAsset;	// 0x3291e959
+ (void)setImplementationClass:(Class)aClass;	// 0x3291823d
- (id)initWithMediaAsset:(id)mediaAsset;	// 0x3291e999
- (id)asset;	// 0x3291ea49
- (int)compare:(id)compare;	// 0x3291ea09
- (void)dealloc;	// 0x3291f129
// converted property getter: - (id)expiryDate;	// 0x3291e9e9
- (id)expiryDescription;	// 0x3292c5e9
- (BOOL)hasBeenPlayed;	// 0x329bc75d
- (BOOL)isExpired;	// 0x329bc755
- (unsigned)rentalPlaybackDuration;	// 0x329bc759
- (id)rentalPlaybackDurationDescription;	// 0x3292d5bd
// converted property setter: - (void)setExpiryDate:(id)date;	// 0x329bc761
@end

