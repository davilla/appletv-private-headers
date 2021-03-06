/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADTableCellBorderStyle, OADFill;

__attribute__((visibility("hidden")))
@interface OADTableCellStyle : NSObject {
@private
	OADTableCellBorderStyle *mBorderStyle;	// 4 = 0x4
	OADFill *mFill;	// 8 = 0x8
}
@property(retain) id borderStyle;	// G=0x3454f735; S=0x3452c4b1; converted property
@property(retain) id fill;	// G=0x3454fb61; S=0x3452c5fd; converted property
+ (id)defaultFill;	// 0x34590609
+ (id)defaultStyle;	// 0x34590565
- (void)applyOverridesFrom:(id)from;	// 0x34590459
// converted property getter: - (id)borderStyle;	// 0x3454f735
- (void)dealloc;	// 0x3452dd2d
// converted property getter: - (id)fill;	// 0x3454fb61
// converted property setter: - (void)setBorderStyle:(id)style;	// 0x3452c4b1
// converted property setter: - (void)setFill:(id)fill;	// 0x3452c5fd
- (id)shallowCopy;	// 0x345904cd
@end

