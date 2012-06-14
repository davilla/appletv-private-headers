/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextSelectionRect.h"

@class WebSelectionRect;

__attribute__((visibility("hidden")))
@interface UITextSelectionRectImpl : UITextSelectionRect {
@private
	WebSelectionRect *webRect;	// 4 = 0x4
}
@property(retain, nonatomic) WebSelectionRect *webRect;	// G=0x30368c11; S=0x30368c21; @synthesize
+ (id)rectWithWebRect:(id)webRect;	// 0x30368999
+ (id)rectsWithWebRects:(id)webRects;	// 0x303689e1
- (id)initWithWebRect:(id)webRect;	// 0x3036890d
- (BOOL)containsEnd;	// 0x30368bb5
- (BOOL)containsStart;	// 0x30368b8d
- (void)dealloc;	// 0x30368955
- (BOOL)isVertical;	// 0x30368bdd
- (id)range;	// 0x30368b89
- (CGRect)rect;	// 0x30368b21
// declared property setter: - (void)setWebRect:(id)rect;	// 0x30368c21
// declared property getter: - (id)webRect;	// 0x30368c11
- (int)writingDirection;	// 0x30368b61
@end
