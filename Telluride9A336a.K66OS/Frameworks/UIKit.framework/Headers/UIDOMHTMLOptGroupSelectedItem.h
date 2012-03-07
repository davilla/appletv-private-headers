/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebSelectedItemPrivate.h"
#import <NSObject.h> // Unknown library

@class DOMHTMLOptGroupElement;

__attribute__((visibility("hidden")))
@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UIWebSelectedItemPrivate> {
@private
	DOMHTMLOptGroupElement *_node;	// 4 = 0x4
}
@property(retain, nonatomic) DOMHTMLOptGroupElement *_node;	// G=0x352cdc99; S=0x352cdca9; @synthesize
@property(readonly, retain) DOMHTMLOptGroupElement *node;	// G=0x352cdc39; converted property
@property(assign) BOOL selected;	// G=0x352cdc49; S=0x352cdc4d; converted property
- (id)initWithHTMLOptGroupNode:(id)htmloptGroupNode;	// 0x352cdbf1
// declared property getter: - (id)_node;	// 0x352cdc99
- (void)dealloc;	// 0x352cdc55
// converted property getter: - (id)node;	// 0x352cdc39
// converted property getter: - (BOOL)selected;	// 0x352cdc49
// converted property setter: - (void)setSelected:(BOOL)selected;	// 0x352cdc4d
// declared property setter: - (void)set_node:(id)node;	// 0x352cdca9
- (void)unselect;	// 0x352cdc51
@end
