/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedImageElement : ATVFeedElement {
	NSString *_url;	// 4 = 0x4
	NSString *_src1080;	// 8 = 0x8
	NSString *_src720;	// 12 = 0xc
	NSString *_src;	// 16 = 0x10
	BOOL _required;	// 20 = 0x14
	NSString *_style;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL required;	// G=0x13d225; S=0x13d235; @synthesize=_required
@property(copy, nonatomic) NSString *src;	// G=0x13d201; S=0x13d215; @synthesize=_src
@property(copy, nonatomic) NSString *src1080;	// G=0x13d1b9; S=0x13d1cd; @synthesize=_src1080
@property(copy, nonatomic) NSString *src720;	// G=0x13d1dd; S=0x13d1f1; @synthesize=_src720
@property(copy, nonatomic) NSString *style;	// G=0x13d245; S=0x13d259; @synthesize=_style
@property(copy, nonatomic) NSString *url;	// G=0x13d111; S=0x13d1a9; @synthesize=_url
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x13cd39
- (void)dealloc;	// 0x13d071
// declared property getter: - (BOOL)required;	// 0x13d225
// declared property setter: - (void)setRequired:(BOOL)required;	// 0x13d235
// declared property setter: - (void)setSrc1080:(id)a1080;	// 0x13d1cd
// declared property setter: - (void)setSrc720:(id)a720;	// 0x13d1f1
// declared property setter: - (void)setSrc:(id)src;	// 0x13d215
// declared property setter: - (void)setStyle:(id)style;	// 0x13d259
// declared property setter: - (void)setUrl:(id)url;	// 0x13d1a9
// declared property getter: - (id)src;	// 0x13d201
// declared property getter: - (id)src1080;	// 0x13d1b9
// declared property getter: - (id)src720;	// 0x13d1dd
// declared property getter: - (id)style;	// 0x13d245
// declared property getter: - (id)url;	// 0x13d111
@end
