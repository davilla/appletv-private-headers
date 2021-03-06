/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class BRXMLElement, ATVFeedImageElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedVideoElement : ATVFeedElement {
@private
	NSString *_url;	// 28 = 0x1c
	NSString *_title;	// 32 = 0x20
	NSString *_description;	// 36 = 0x24
	NSString *_rating;	// 40 = 0x28
	ATVFeedImageElement *_image;	// 44 = 0x2c
	float _bookmarkTimeSec;	// 48 = 0x30
	BRXMLElement *_xml;	// 52 = 0x34
}
@property(assign, nonatomic) float bookmarkTimeSec;	// G=0x35f2148d; S=0x35f2149d; @synthesize=_bookmarkTimeSec
@property(copy, nonatomic) NSString *description;	// G=0x35f213f1; S=0x35f21401; @synthesize=_description
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x35f21459; S=0x35f21469; @synthesize=_image
@property(copy, nonatomic) NSString *rating;	// G=0x35f21425; S=0x35f21435; @synthesize=_rating
@property(copy, nonatomic) NSString *title;	// G=0x35f213bd; S=0x35f213cd; @synthesize=_title
@property(copy, nonatomic) NSString *url;	// G=0x35f21389; S=0x35f21399; @synthesize=_url
@property(readonly, assign, nonatomic) BRXMLElement *xml;	// G=0x35f214ad; @synthesize=_xml
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x35f21101
// declared property getter: - (float)bookmarkTimeSec;	// 0x35f2148d
- (void)dealloc;	// 0x35f212d9
// declared property getter: - (id)description;	// 0x35f213f1
// declared property getter: - (id)image;	// 0x35f21459
// declared property getter: - (id)rating;	// 0x35f21425
// declared property setter: - (void)setBookmarkTimeSec:(float)sec;	// 0x35f2149d
// declared property setter: - (void)setDescription:(id)description;	// 0x35f21401
// declared property setter: - (void)setImage:(id)image;	// 0x35f21469
// declared property setter: - (void)setRating:(id)rating;	// 0x35f21435
// declared property setter: - (void)setTitle:(id)title;	// 0x35f213cd
// declared property setter: - (void)setUrl:(id)url;	// 0x35f21399
// declared property getter: - (id)title;	// 0x35f213bd
// declared property getter: - (id)url;	// 0x35f21389
// declared property getter: - (id)xml;	// 0x35f214ad
@end

