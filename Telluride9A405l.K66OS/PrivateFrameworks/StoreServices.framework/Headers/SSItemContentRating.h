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
@property(readonly, assign, nonatomic) NSDictionary *contentRatingDictionary;	// G=0x36524265; 
@property(readonly, assign, nonatomic, getter=isExplicitContent) BOOL explicitContent;	// G=0x36523cf5; 
@property(assign, nonatomic) int rank;	// G=0x36523e29; S=0x36524035; 
@property(copy, nonatomic) NSString *ratingDescription;	// G=0x36523e8d; S=0x36524079; 
@property(copy, nonatomic) NSString *ratingLabel;	// G=0x36523f1d; S=0x36524095; 
@property(assign, nonatomic) int ratingSystem;	// G=0x36523fad; S=0x365240b1; 
@property(readonly, assign, nonatomic) SSItemArtworkImage *ratingSystemLogo;	// G=0x3652429d; 
@property(readonly, assign, nonatomic, getter=isRestricted) BOOL restricted;	// G=0x36523d35; 
@property(assign, nonatomic) BOOL shouldHideWhenRestricted;	// G=0x36524145; S=0x36524101; 
+ (int)ratingSystemFromString:(id)string;	// 0x365241f5
+ (id)stringForRatingSystem:(int)ratingSystem;	// 0x3652423d
- (id)init;	// 0x36523b8d
- (id)initWithDictionary:(id)dictionary;	// 0x36523bf1
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x365243a5
- (BOOL)_isRatingSystemForApps:(int)apps;	// 0x36524415
- (BOOL)_isRatingSystemForMovies:(int)movies;	// 0x36524425
- (BOOL)_isRatingSystemForMusic:(int)music;	// 0x3652443d
- (BOOL)_isRatingSystemForTV:(int)tv;	// 0x36524449
- (void)_setValue:(id)value forProperty:(id)property;	// 0x365244a1
- (void)_setValueCopy:(id)copy forProperty:(id)property;	// 0x36524459
// declared property getter: - (id)contentRatingDictionary;	// 0x36524265
- (id)copyWithZone:(NSZone *)zone;	// 0x36523c91
- (void *)copyXPCEncoding;	// 0x36524371
- (void)dealloc;	// 0x36523c45
// declared property getter: - (BOOL)isExplicitContent;	// 0x36523cf5
// declared property getter: - (BOOL)isRestricted;	// 0x36523d35
// declared property getter: - (int)rank;	// 0x36523e29
// declared property getter: - (id)ratingDescription;	// 0x36523e8d
// declared property getter: - (id)ratingLabel;	// 0x36523f1d
// declared property getter: - (int)ratingSystem;	// 0x36523fad
// declared property getter: - (id)ratingSystemLogo;	// 0x3652429d
// declared property setter: - (void)setRank:(int)rank;	// 0x36524035
// declared property setter: - (void)setRatingDescription:(id)description;	// 0x36524079
// declared property setter: - (void)setRatingLabel:(id)label;	// 0x36524095
// declared property setter: - (void)setRatingSystem:(int)system;	// 0x365240b1
// declared property setter: - (void)setShouldHideWhenRestricted:(BOOL)hideWhenRestricted;	// 0x36524101
// declared property getter: - (BOOL)shouldHideWhenRestricted;	// 0x36524145
- (id)valueForProperty:(id)property;	// 0x365241ad
@end

