/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDictionary, NSMutableDictionary, SSItemArtworkImage;

@interface SSItemContentRating : NSObject <SSXPCCoding, NSCopying> {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSDictionary *contentRatingDictionary;	// G=0x3156d265; 
@property(readonly, assign, nonatomic, getter=isExplicitContent) BOOL explicitContent;	// G=0x3156ccf5; 
@property(assign, nonatomic) int rank;	// G=0x3156ce29; S=0x3156d035; 
@property(copy, nonatomic) NSString *ratingDescription;	// G=0x3156ce8d; S=0x3156d079; 
@property(copy, nonatomic) NSString *ratingLabel;	// G=0x3156cf1d; S=0x3156d095; 
@property(assign, nonatomic) int ratingSystem;	// G=0x3156cfad; S=0x3156d0b1; 
@property(readonly, assign, nonatomic) SSItemArtworkImage *ratingSystemLogo;	// G=0x3156d29d; 
@property(readonly, assign, nonatomic, getter=isRestricted) BOOL restricted;	// G=0x3156cd35; 
@property(assign, nonatomic) BOOL shouldHideWhenRestricted;	// G=0x3156d145; S=0x3156d101; 
+ (int)ratingSystemFromString:(id)string;	// 0x3156d1f5
+ (id)stringForRatingSystem:(int)ratingSystem;	// 0x3156d23d
- (id)init;	// 0x3156cb8d
- (id)initWithDictionary:(id)dictionary;	// 0x3156cbf1
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x3156d3a5
- (BOOL)_isRatingSystemForApps:(int)apps;	// 0x3156d415
- (BOOL)_isRatingSystemForMovies:(int)movies;	// 0x3156d425
- (BOOL)_isRatingSystemForMusic:(int)music;	// 0x3156d43d
- (BOOL)_isRatingSystemForTV:(int)tv;	// 0x3156d449
- (void)_setValue:(id)value forProperty:(id)property;	// 0x3156d4a1
- (void)_setValueCopy:(id)copy forProperty:(id)property;	// 0x3156d459
// declared property getter: - (id)contentRatingDictionary;	// 0x3156d265
- (id)copyWithZone:(NSZone *)zone;	// 0x3156cc91
- (void *)copyXPCEncoding;	// 0x3156d371
- (void)dealloc;	// 0x3156cc45
// declared property getter: - (BOOL)isExplicitContent;	// 0x3156ccf5
// declared property getter: - (BOOL)isRestricted;	// 0x3156cd35
// declared property getter: - (int)rank;	// 0x3156ce29
// declared property getter: - (id)ratingDescription;	// 0x3156ce8d
// declared property getter: - (id)ratingLabel;	// 0x3156cf1d
// declared property getter: - (int)ratingSystem;	// 0x3156cfad
// declared property getter: - (id)ratingSystemLogo;	// 0x3156d29d
// declared property setter: - (void)setRank:(int)rank;	// 0x3156d035
// declared property setter: - (void)setRatingDescription:(id)description;	// 0x3156d079
// declared property setter: - (void)setRatingLabel:(id)label;	// 0x3156d095
// declared property setter: - (void)setRatingSystem:(int)system;	// 0x3156d0b1
// declared property setter: - (void)setShouldHideWhenRestricted:(BOOL)hideWhenRestricted;	// 0x3156d101
// declared property getter: - (BOOL)shouldHideWhenRestricted;	// 0x3156d145
- (id)valueForProperty:(id)property;	// 0x3156d1ad
@end
