/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface WDStory : NSObject {
@private
	OADDrawable *mHead;	// 4 = 0x4
	BOOL mOle;	// 8 = 0x8
}
@property(assign, getter=isOle) BOOL ole;	// G=0x34609979; S=0x34609969; converted property
- (id)initWithHead:(id)head;	// 0x34609989
- (void)dealloc;	// 0x34609a45
- (id)head;	// 0x34609959
// converted property getter: - (BOOL)isOle;	// 0x34609979
// converted property setter: - (void)setOle:(BOOL)ole;	// 0x34609969
- (id)text;	// 0x346099e1
@end

