/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedRootElement.h"

@class ATVFeedVideoElement;

__attribute__((visibility("hidden")))
@interface ATVFeedVideoPlayerElement : ATVFeedRootElement {
@private
	ATVFeedVideoElement *_video;	// 52 = 0x34
}
@property(retain, nonatomic) ATVFeedVideoElement *video;	// G=0x32b092fd; S=0x32b0930d; @synthesize=_video
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x32b09219
- (void)dealloc;	// 0x32b092b1
// declared property setter: - (void)setVideo:(id)video;	// 0x32b0930d
// declared property getter: - (id)video;	// 0x32b092fd
@end
