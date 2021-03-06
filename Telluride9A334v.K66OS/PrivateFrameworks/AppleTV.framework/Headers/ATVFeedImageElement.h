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
@property(copy, nonatomic) NSString *originalURL;	// G=0x332ff279; S=0x332ff171; @synthesize=_originalURL
@property(assign, nonatomic) BOOL required;	// G=0x332ff289; S=0x332ff299; @synthesize=_required
@property(copy, nonatomic) NSString *style;	// G=0x332ff2a9; S=0x332ff2b9; @synthesize=_style
@property(readonly, assign, nonatomic) NSString *url;	// G=0x332ff269; @synthesize=_url
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x332fef71
- (void)dealloc;	// 0x332ff0fd
// declared property getter: - (id)originalURL;	// 0x332ff279
// declared property getter: - (BOOL)required;	// 0x332ff289
// declared property setter: - (void)setOriginalURL:(id)url;	// 0x332ff171
// declared property setter: - (void)setRequired:(BOOL)required;	// 0x332ff299
// declared property setter: - (void)setStyle:(id)style;	// 0x332ff2b9
// declared property getter: - (id)style;	// 0x332ff2a9
// declared property getter: - (id)url;	// 0x332ff269
@end

