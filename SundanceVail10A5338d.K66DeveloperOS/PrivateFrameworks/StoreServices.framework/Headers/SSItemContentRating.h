/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSDictionary, SSItemArtworkImage, NSMutableDictionary;

@interface SSItemContentRating : NSObject <SSXPCCoding, NSCopying> {
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSDictionary *contentRatingDictionary;	// G=0x3236af61; 
@property(readonly, assign, nonatomic, getter=isExplicitContent) BOOL explicitContent;	// G=0x3236a9f1; 
@property(assign, nonatomic) int rank;	// G=0x3236ab1d; S=0x3236ad2d; 
@property(copy, nonatomic) NSString *ratingDescription;	// G=0x3236ab81; S=0x3236ad71; 
@property(copy, nonatomic) NSString *ratingLabel;	// G=0x3236ac11; S=0x3236ad8d; 
@property(assign, nonatomic) int ratingSystem;	// G=0x3236aca1; S=0x3236ada9; 
@property(readonly, assign, nonatomic) SSItemArtworkImage *ratingSystemLogo;	// G=0x3236af99; 
@property(readonly, assign, nonatomic, getter=isRestricted) BOOL restricted;	// G=0x3236aa31; 
@property(assign, nonatomic) BOOL shouldHideWhenRestricted;	// G=0x3236ae3d; S=0x3236adf9; 
+ (int)ratingSystemFromString:(id)string;	// 0x3236aef1
+ (id)stringForRatingSystem:(int)ratingSystem;	// 0x3236af39
- (id)init;	// 0x3236a891
- (id)initWithDictionary:(id)dictionary;	// 0x3236a8f5
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3236b0a1
- (BOOL)_isRatingSystemForApps:(int)apps;	// 0x3236b141
- (BOOL)_isRatingSystemForMovies:(int)movies;	// 0x3236b151
- (BOOL)_isRatingSystemForMusic:(int)music;	// 0x3236b169
- (BOOL)_isRatingSystemForTV:(int)tv;	// 0x3236b175
- (void)_setValue:(id)value forProperty:(id)property;	// 0x3236b1cd
- (void)_setValueCopy:(id)copy forProperty:(id)property;	// 0x3236b185
// declared property getter: - (id)contentRatingDictionary;	// 0x3236af61
- (id)copyWithZone:(NSZone *)zone;	// 0x3236a995
- (id)copyXPCEncoding;	// 0x3236b06d
- (void)dealloc;	// 0x3236a949
// declared property getter: - (BOOL)isExplicitContent;	// 0x3236a9f1
// declared property getter: - (BOOL)isRestricted;	// 0x3236aa31
// declared property getter: - (int)rank;	// 0x3236ab1d
// declared property getter: - (id)ratingDescription;	// 0x3236ab81
// declared property getter: - (id)ratingLabel;	// 0x3236ac11
// declared property getter: - (int)ratingSystem;	// 0x3236aca1
// declared property getter: - (id)ratingSystemLogo;	// 0x3236af99
// declared property setter: - (void)setRank:(int)rank;	// 0x3236ad2d
// declared property setter: - (void)setRatingDescription:(id)description;	// 0x3236ad71
// declared property setter: - (void)setRatingLabel:(id)label;	// 0x3236ad8d
// declared property setter: - (void)setRatingSystem:(int)system;	// 0x3236ada9
// declared property setter: - (void)setShouldHideWhenRestricted:(BOOL)hideWhenRestricted;	// 0x3236adf9
// declared property getter: - (BOOL)shouldHideWhenRestricted;	// 0x3236ae3d
- (id)valueForProperty:(id)property;	// 0x3236aea9
@end

