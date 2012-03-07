/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIFormPeripheral.h"

@class DOMHTMLSelectElement;
@protocol UIWebFormControl;

__attribute__((visibility("hidden")))
@interface UIWebSelectPeripheral : NSObject <UIFormPeripheral> {
@private
	DOMHTMLSelectElement *_selectionNode;	// 4 = 0x4
	id<UIWebFormControl> _selectControl;	// 8 = 0x8
}
@property(retain, nonatomic) id<UIWebFormControl> _selectControl;	// G=0x352ce2c1; S=0x352ce2d1; @synthesize
@property(retain, nonatomic) DOMHTMLSelectElement *_selectionNode;	// G=0x352ce28d; S=0x352ce29d; @synthesize
+ (id)createPeripheralWithDOMHTMLSelectElement:(id)domhtmlselectElement;	// 0x352ce1ad
- (id)initWithDOMHTMLSelectElement:(id)domhtmlselectElement;	// 0x352cdf79
// declared property getter: - (id)_selectControl;	// 0x352ce2c1
// declared property getter: - (id)_selectionNode;	// 0x352ce28d
- (id)assistantView;	// 0x352ce24d
- (void)beginEditing;	// 0x352ce26d
- (void)dealloc;	// 0x352ce1f5
// declared property setter: - (void)set_selectControl:(id)control;	// 0x352ce2d1
// declared property setter: - (void)set_selectionNode:(id)node;	// 0x352ce29d
@end
