/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UILabel.h"
#import "UIKit-Structs.h"


@interface UITextLabel : UILabel {
}
@property(assign) int alignment;	// G=0x3029039d; S=0x3029038d; converted property
@property(assign) BOOL centersHorizontally;	// G=0x30290245; S=0x30290225; converted property
@property(retain) id color;	// G=0x302901f5; S=0x302901e5; converted property
@property(retain) id highlightedColor;	// G=0x30290215; S=0x30290205; converted property
@property(assign) float minFontSize;	// G=0x3029037d; S=0x3029036d; converted property
@property(assign) BOOL textAutoresizesToFit;	// G=0x30290355; S=0x30290345; converted property
@property(assign) BOOL wrapsText;	// G=0x30290325; S=0x30290261; converted property
// converted property getter: - (int)alignment;	// 0x3029039d
// converted property getter: - (BOOL)centersHorizontally;	// 0x30290245
// converted property getter: - (id)color;	// 0x302901f5
- (void)drawRect:(CGRect)rect;	// 0x302195c5
- (CGSize)ellipsizedTextSize;	// 0x30290199
// converted property getter: - (id)highlightedColor;	// 0x30290215
// converted property getter: - (float)minFontSize;	// 0x3029037d
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x3029038d
// converted property setter: - (void)setCentersHorizontally:(BOOL)horizontally;	// 0x30290225
// converted property setter: - (void)setColor:(id)color;	// 0x302901e5
// converted property setter: - (void)setHighlightedColor:(id)color;	// 0x30290205
// converted property setter: - (void)setMinFontSize:(float)size;	// 0x3029036d
// converted property setter: - (void)setTextAutoresizesToFit:(BOOL)fit;	// 0x30290345
// converted property setter: - (void)setWrapsText:(BOOL)text;	// 0x30290261
// converted property getter: - (BOOL)textAutoresizesToFit;	// 0x30290355
// converted property getter: - (BOOL)wrapsText;	// 0x30290325
@end

