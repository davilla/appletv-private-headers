/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedImageElement : ATVFeedElement {
@private
	NSString *_url;	// 28 = 0x1c
	NSString *_originalURL;	// 32 = 0x20
	BOOL _required;	// 36 = 0x24
	NSString *_style;	// 40 = 0x28
}
@property(copy, nonatomic) NSString *originalURL;	// G=0x35ef582d; S=0x35ef5725; @synthesize=_originalURL
@property(assign, nonatomic) BOOL required;	// G=0x35ef583d; S=0x35ef584d; @synthesize=_required
@property(copy, nonatomic) NSString *style;	// G=0x35ef585d; S=0x35ef586d; @synthesize=_style
@property(readonly, assign, nonatomic) NSString *url;	// G=0x35ef581d; @synthesize=_url
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x35ef5525
- (void)dealloc;	// 0x35ef56b1
// declared property getter: - (id)originalURL;	// 0x35ef582d
// declared property getter: - (BOOL)required;	// 0x35ef583d
// declared property setter: - (void)setOriginalURL:(id)url;	// 0x35ef5725
// declared property setter: - (void)setRequired:(BOOL)required;	// 0x35ef584d
// declared property setter: - (void)setStyle:(id)style;	// 0x35ef586d
// declared property getter: - (id)style;	// 0x35ef585d
// declared property getter: - (id)url;	// 0x35ef581d
@end

