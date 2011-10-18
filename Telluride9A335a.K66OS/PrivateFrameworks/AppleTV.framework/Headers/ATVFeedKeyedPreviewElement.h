/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedKeyedPreviewElement : ATVFeedElement {
@private
	NSString *_title;	// 28 = 0x1c
	NSString *_rightLabel;	// 32 = 0x20
	NSString *_summary;	// 36 = 0x24
	NSString *_footnote;	// 40 = 0x28
	NSString *_rating;	// 44 = 0x2c
	ATVFeedImageElement *_image;	// 48 = 0x30
	NSArray *_metadataKeys;	// 52 = 0x34
	NSArray *_metadataValues;	// 56 = 0x38
}
@property(copy, nonatomic) NSString *footnote;	// G=0x34307945; S=0x34307955; @synthesize=_footnote
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x343079ad; S=0x343079bd; @synthesize=_image
@property(retain, nonatomic) NSArray *metadataKeys;	// G=0x343079e1; S=0x343079f1; @synthesize=_metadataKeys
@property(retain, nonatomic) NSArray *metadataValues;	// G=0x34307a15; S=0x34307a25; @synthesize=_metadataValues
@property(copy, nonatomic) NSString *rating;	// G=0x34307979; S=0x34307989; @synthesize=_rating
@property(copy, nonatomic) NSString *rightLabel;	// G=0x343078dd; S=0x343078ed; @synthesize=_rightLabel
@property(copy, nonatomic) NSString *summary;	// G=0x34307911; S=0x34307921; @synthesize=_summary
@property(copy, nonatomic) NSString *title;	// G=0x343078a9; S=0x343078b9; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x34307431
- (void)dealloc;	// 0x343077d1
// declared property getter: - (id)footnote;	// 0x34307945
// declared property getter: - (id)image;	// 0x343079ad
// declared property getter: - (id)metadataKeys;	// 0x343079e1
// declared property getter: - (id)metadataValues;	// 0x34307a15
// declared property getter: - (id)rating;	// 0x34307979
// declared property getter: - (id)rightLabel;	// 0x343078dd
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x34307955
// declared property setter: - (void)setImage:(id)image;	// 0x343079bd
// declared property setter: - (void)setMetadataKeys:(id)keys;	// 0x343079f1
// declared property setter: - (void)setMetadataValues:(id)values;	// 0x34307a25
// declared property setter: - (void)setRating:(id)rating;	// 0x34307989
// declared property setter: - (void)setRightLabel:(id)label;	// 0x343078ed
// declared property setter: - (void)setSummary:(id)summary;	// 0x34307921
// declared property setter: - (void)setTitle:(id)title;	// 0x343078b9
// declared property getter: - (id)summary;	// 0x34307911
// declared property getter: - (id)title;	// 0x343078a9
@end

