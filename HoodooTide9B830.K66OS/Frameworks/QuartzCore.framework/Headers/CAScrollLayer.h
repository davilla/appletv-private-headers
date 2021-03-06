/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"

@class NSString;

@interface CAScrollLayer : CALayer {
}
@property(copy) NSString *scrollMode;	// G=0x36c5f899; S=0x36c5f8a1; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x36c5f90d
+ (id)defaultValueForKey:(id)key;	// 0x36c5f8a9
- (void)_scrollPoint:(CGPoint)point fromLayer:(id)layer;	// 0x36c5f4ad
- (void)_scrollRect:(CGRect)rect fromLayer:(id)layer;	// 0x36c5f4fd
- (CGRect)_visibleRectOfLayer:(id)layer;	// 0x36c5f809
// declared property getter: - (id)scrollMode;	// 0x36c5f899
- (void)scrollToPoint:(CGPoint)point;	// 0x36c5f655
- (void)scrollToRect:(CGRect)rect;	// 0x36c5f6dd
// declared property setter: - (void)setScrollMode:(id)mode;	// 0x36c5f8a1
@end

