/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "OADClient.h"
#import "OADTextClient.h"

@class NSMutableDictionary, EDSheet, EDComment, EDTextBox, EDAnchor;

__attribute__((visibility("hidden")))
@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient> {
@private
	EDSheet *mSheet;	// 4 = 0x4
	id mClientState;	// 8 = 0x8
	EDAnchor *mAnchor;	// 12 = 0xc
	EDTextBox *mTextBox;	// 16 = 0x10
	EDComment *mComment;	// 20 = 0x14
	NSMutableDictionary *mTableModels;	// 24 = 0x18
	CGRect mBounds;	// 28 = 0x1c
	bool mIsBoundsSet;	// 44 = 0x2c
}
@property(retain) id anchor;	// G=0x3447a585; S=0x34475b1d; converted property
@property(assign) CGRect bounds;	// G=0x344f2e4d; S=0x344f220d; converted property
@property(retain) id clientState;	// G=0x345c4861; S=0x345c49ad; converted property
@property(retain) id comment;	// G=0x3447bd39; S=0x344f1119; converted property
@property(retain) id sheet;	// G=0x345c4881; S=0x344e5181; converted property
@property(retain) id tableModels;	// G=0x345c4891; S=0x345c496d; converted property
@property(retain) id textBox;	// G=0x344d2f55; S=0x344d2dfd; converted property
- (id)init;	// 0x34475951
// converted property getter: - (id)anchor;	// 0x3447a585
- (bool)areBoundsSet;	// 0x345c4871
// converted property getter: - (CGRect)bounds;	// 0x344f2e4d
// converted property getter: - (id)clientState;	// 0x345c4861
// converted property getter: - (id)comment;	// 0x3447bd39
- (void)dealloc;	// 0x344857c5
- (BOOL)hasBounds;	// 0x3447a575
- (BOOL)hasText;	// 0x3447d4a5
// converted property setter: - (void)setAnchor:(id)anchor;	// 0x34475b1d
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x344f220d
// converted property setter: - (void)setClientState:(id)state;	// 0x345c49ad
// converted property setter: - (void)setComment:(id)comment;	// 0x344f1119
// converted property setter: - (void)setSheet:(id)sheet;	// 0x344e5181
// converted property setter: - (void)setTableModels:(id)models;	// 0x345c496d
// converted property setter: - (void)setTextBox:(id)box;	// 0x344d2dfd
// converted property getter: - (id)sheet;	// 0x345c4881
// converted property getter: - (id)tableModels;	// 0x345c4891
// converted property getter: - (id)textBox;	// 0x344d2f55
@end

