/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "MediaPlayer-Structs.h"

@class NSString, NSDictionary;

@interface MPStoreOfferContentRating : NSObject <NSCoding> {
@private
	NSDictionary *_dictionary;	// 4 = 0x4
	int _ratingLevel;	// 8 = 0x8
	NSString *_ratingDescription;	// 12 = 0xc
	NSString *_ratingLabel;	// 16 = 0x10
	unsigned _ratingSystem;	// 20 = 0x14
}
@property(readonly, assign, nonatomic, getter=isExplicitContent) BOOL explicitContent;	// G=0x348f6f71; 
@property(readonly, assign, nonatomic) id mediaPropertyContentRatingValue;	// G=0x348f7269; 
@property(copy, nonatomic) NSString *ratingDescription;	// G=0x348f7341; S=0x348f7355; @synthesize=_ratingDescription
@property(copy, nonatomic) NSString *ratingLabel;	// G=0x348f7365; S=0x348f7379; @synthesize=_ratingLabel
@property(assign, nonatomic) int ratingLevel;	// G=0x348f7321; S=0x348f7331; @synthesize=_ratingLevel
@property(assign, nonatomic) unsigned ratingSystem;	// G=0x348f7389; S=0x348f7399; @synthesize=_ratingSystem
@property(readonly, assign, nonatomic, getter=isRestrictedContent) BOOL restrictedContent;	// G=0x348f6fa1; 
@property(readonly, assign, nonatomic, getter=isRestrictedPurchase) BOOL restrictedPurchase;	// G=0x348f7175; 
+ (unsigned)ratingSystemFromString:(id)string;	// 0x348f6f29
- (id)initWithCoder:(id)coder;	// 0x348f6da1
- (id)initWithDictionary:(id)dictionary;	// 0x348f6b55
- (BOOL)_isRatingSystemForApps:(unsigned)apps;	// 0x348f7225
- (BOOL)_isRatingSystemForMovies:(unsigned)movies;	// 0x348f7235
- (BOOL)_isRatingSystemForMusic:(unsigned)music;	// 0x348f724d
- (BOOL)_isRatingSystemForTV:(unsigned)tv;	// 0x348f7259
- (id)copyWithZone:(NSZone *)zone;	// 0x348f6e79
- (void)dealloc;	// 0x348f6e01
- (void)encodeWithCoder:(id)coder;	// 0x348f6d71
// declared property getter: - (BOOL)isExplicitContent;	// 0x348f6f71
// declared property getter: - (BOOL)isRestrictedContent;	// 0x348f6fa1
// declared property getter: - (BOOL)isRestrictedPurchase;	// 0x348f7175
// declared property getter: - (id)mediaPropertyContentRatingValue;	// 0x348f7269
// declared property getter: - (id)ratingDescription;	// 0x348f7341
// declared property getter: - (id)ratingLabel;	// 0x348f7365
// declared property getter: - (int)ratingLevel;	// 0x348f7321
// declared property getter: - (unsigned)ratingSystem;	// 0x348f7389
// declared property setter: - (void)setRatingDescription:(id)description;	// 0x348f7355
// declared property setter: - (void)setRatingLabel:(id)label;	// 0x348f7379
// declared property setter: - (void)setRatingLevel:(int)level;	// 0x348f7331
// declared property setter: - (void)setRatingSystem:(unsigned)system;	// 0x348f7399
- (id)valueForProperty:(id)property;	// 0x348f71dd
@end

