/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface UITableColumn : NSObject {
	NSString *_identifier;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
	float _width;	// 12 = 0xc
}
@property(retain) NSString *identifier;	// G=0x320eafe5; S=0x320eb005; converted property
@property(retain) NSString *title;	// G=0x320eafd5; S=0x320eb041; converted property
@property(assign) float width;	// G=0x32034625; S=0x320eaff5; converted property
- (id)initWithTitle:(id)title identifier:(id)identifier width:(float)width;	// 0x32033669
- (void)dealloc;	// 0x32046cb5
// converted property getter: - (id)identifier;	// 0x320eafe5
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x320eb005
// converted property setter: - (void)setTitle:(id)title;	// 0x320eb041
// converted property setter: - (void)setWidth:(float)width;	// 0x320eaff5
// converted property getter: - (id)title;	// 0x320eafd5
// converted property getter: - (float)width;	// 0x32034625
@end

