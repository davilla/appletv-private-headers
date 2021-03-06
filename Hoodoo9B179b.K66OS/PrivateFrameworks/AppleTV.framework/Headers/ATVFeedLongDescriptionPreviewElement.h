/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSString, ATVFeedMediaBadgesElement, ATVFeedStarRatingElement, ATVFeedImageElement, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedLongDescriptionPreviewElement : ATVFeedElement {
@private
	NSString *_title;	// 28 = 0x1c
	NSString *_summary;	// 32 = 0x20
	NSString *_footnote;	// 36 = 0x24
	NSString *_rating;	// 40 = 0x28
	ATVFeedImageElement *_image;	// 44 = 0x2c
	NSArray *_metadataLabels;	// 48 = 0x30
	ATVFeedMediaBadgesElement *_mediaBadges;	// 52 = 0x34
	ATVFeedStarRatingElement *_starRating;	// 56 = 0x38
}
@property(copy, nonatomic) NSString *footnote;	// G=0x303c22d1; S=0x303c22e1; @synthesize=_footnote
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x303c2339; S=0x303c2349; @synthesize=_image
@property(retain, nonatomic) ATVFeedMediaBadgesElement *mediaBadges;	// G=0x303c23a1; S=0x303c23b1; @synthesize=_mediaBadges
@property(retain, nonatomic) NSArray *metadataLabels;	// G=0x303c236d; S=0x303c237d; @synthesize=_metadataLabels
@property(copy, nonatomic) NSString *rating;	// G=0x303c2305; S=0x303c2315; @synthesize=_rating
@property(retain, nonatomic) ATVFeedStarRatingElement *starRating;	// G=0x303c23d5; S=0x303c23e5; @synthesize=_starRating
@property(copy, nonatomic) NSString *summary;	// G=0x303c229d; S=0x303c22ad; @synthesize=_summary
@property(copy, nonatomic) NSString *title;	// G=0x303c2269; S=0x303c2279; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x303c1e59
- (void)dealloc;	// 0x303c2191
// declared property getter: - (id)footnote;	// 0x303c22d1
// declared property getter: - (id)image;	// 0x303c2339
// declared property getter: - (id)mediaBadges;	// 0x303c23a1
// declared property getter: - (id)metadataLabels;	// 0x303c236d
// declared property getter: - (id)rating;	// 0x303c2305
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x303c22e1
// declared property setter: - (void)setImage:(id)image;	// 0x303c2349
// declared property setter: - (void)setMediaBadges:(id)badges;	// 0x303c23b1
// declared property setter: - (void)setMetadataLabels:(id)labels;	// 0x303c237d
// declared property setter: - (void)setRating:(id)rating;	// 0x303c2315
// declared property setter: - (void)setStarRating:(id)rating;	// 0x303c23e5
// declared property setter: - (void)setSummary:(id)summary;	// 0x303c22ad
// declared property setter: - (void)setTitle:(id)title;	// 0x303c2279
// declared property getter: - (id)starRating;	// 0x303c23d5
// declared property getter: - (id)summary;	// 0x303c229d
// declared property getter: - (id)title;	// 0x303c2269
@end

