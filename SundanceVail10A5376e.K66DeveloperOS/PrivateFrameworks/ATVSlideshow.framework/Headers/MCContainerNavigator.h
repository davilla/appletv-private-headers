/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"

@class NSString, NSSet, MCPlugHaven, NSMutableDictionary;

@interface MCContainerNavigator : MCContainer {
	NSMutableDictionary *mPlugs;	// 28 = 0x1c
	NSString *mStartPlugID;	// 32 = 0x20
	MCPlugHaven *mStartPlug;	// 36 = 0x24
}
@property(readonly, assign) unsigned countOfPlugs;	// G=0x3630b9d5; 
@property(readonly, assign) NSSet *plugs;	// G=0x3630b889; 
@property(readonly, assign) MCPlugHaven *startPlug;	// G=0x3630c5ad; @synthesize=mStartPlug
@property(copy, nonatomic) NSString *startPlugID;	// G=0x3630c599; S=0x3630c43d; @synthesize=mStartPlugID
- (id)init;	// 0x3630b2cd
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3630b331
- (void)changeIDOfPlug:(id)plug toID:(id)anId;	// 0x3630be05
// declared property getter: - (unsigned)countOfPlugs;	// 0x3630b9d5
- (void)demolish;	// 0x3630b4f9
- (id)imprint;	// 0x3630b715
- (id)plugForID:(id)anId;	// 0x3630baa1
// declared property getter: - (id)plugs;	// 0x3630b889
- (void)removeAllPlugs;	// 0x3630c1c9
- (void)removePlug:(id)plug;	// 0x3630bf75
- (void)removePlugForID:(id)anId;	// 0x3630c191
- (id)setPlugForContainer:(id)container forID:(id)anId;	// 0x3630bb9d
// declared property setter: - (void)setStartPlugID:(id)anId;	// 0x3630c43d
// declared property getter: - (id)startPlug;	// 0x3630c5ad
// declared property getter: - (id)startPlugID;	// 0x3630c599
@end

