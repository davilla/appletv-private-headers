/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl;

__attribute__((visibility("hidden")))
@interface BRMetadataLineLayer : BRControl {
	BRTextControl *_labelLayer;	// 80 = 0x50
	BRControl *_valueLayer;	// 84 = 0x54
	float _maxLabelWidth;	// 88 = 0x58
}
- (id)initWithLabel:(id)label value:(id)value;	// 0x2c42b9
- (id)accessibilityLabel;	// 0x2c4459
- (void)dealloc;	// 0x2c43c5
- (id)label;	// 0x2c4429
- (void)layoutSubcontrols;	// 0x2c4581
- (void)setMaxLabelWidth:(float)width;	// 0x2c44b1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2c44d1
- (id)value;	// 0x2c4449
@end
