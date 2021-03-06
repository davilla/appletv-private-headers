/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <NSObject.h> // Unknown library

@class BBSectionSubtypeParameters, NSMutableDictionary;

@interface BBSectionParameters : NSObject {
@private
	BOOL _showsSubtitle;	// 4 = 0x4
	unsigned _messageNumberOfLines;	// 8 = 0x8
	BOOL _usesVariableLayout;	// 12 = 0xc
	BOOL _orderSectionUsingRecencyDate;	// 13 = 0xd
	BOOL _showsDateInFloatingLockScreenAlert;	// 14 = 0xe
	BBSectionSubtypeParameters *_defaultSubtypeParameters;	// 16 = 0x10
	NSMutableDictionary *_allSubtypeParameters;	// 20 = 0x14
}
@property(retain, nonatomic) NSMutableDictionary *allSubtypeParameters;	// G=0x30b38649; S=0x30b38659; @synthesize=_allSubtypeParameters
@property(retain, nonatomic) BBSectionSubtypeParameters *defaultSubtypeParameters;	// G=0x30b38615; S=0x30b38625; @synthesize=_defaultSubtypeParameters
@property(assign, nonatomic) unsigned messageNumberOfLines;	// G=0x30b38595; S=0x30b385a5; @synthesize=_messageNumberOfLines
@property(assign, nonatomic) BOOL orderSectionUsingRecencyDate;	// G=0x30b385d5; S=0x30b385e5; @synthesize=_orderSectionUsingRecencyDate
@property(assign, nonatomic) BOOL showsDateInFloatingLockScreenAlert;	// G=0x30b385f5; S=0x30b38605; @synthesize=_showsDateInFloatingLockScreenAlert
@property(assign, nonatomic) BOOL showsSubtitle;	// G=0x30b38575; S=0x30b38585; @synthesize=_showsSubtitle
@property(assign, nonatomic) BOOL usesVariableLayout;	// G=0x30b385b5; S=0x30b385c5; @synthesize=_usesVariableLayout
- (id)init;	// 0x30b380bd
- (id)initWithCoder:(id)coder;	// 0x30b38285
// declared property getter: - (id)allSubtypeParameters;	// 0x30b38649
- (void)dealloc;	// 0x30b38165
// declared property getter: - (id)defaultSubtypeParameters;	// 0x30b38615
- (void)encodeWithCoder:(id)coder;	// 0x30b38441
// declared property getter: - (unsigned)messageNumberOfLines;	// 0x30b38595
// declared property getter: - (BOOL)orderSectionUsingRecencyDate;	// 0x30b385d5
- (id)parametersForSubtype:(int)subtype;	// 0x30b381c5
// declared property setter: - (void)setAllSubtypeParameters:(id)parameters;	// 0x30b38659
// declared property setter: - (void)setDefaultSubtypeParameters:(id)parameters;	// 0x30b38625
// declared property setter: - (void)setMessageNumberOfLines:(unsigned)lines;	// 0x30b385a5
// declared property setter: - (void)setOrderSectionUsingRecencyDate:(BOOL)date;	// 0x30b385e5
// declared property setter: - (void)setShowsDateInFloatingLockScreenAlert:(BOOL)floatingLockScreenAlert;	// 0x30b38605
// declared property setter: - (void)setShowsSubtitle:(BOOL)subtitle;	// 0x30b38585
// declared property setter: - (void)setUsesVariableLayout:(BOOL)layout;	// 0x30b385c5
// declared property getter: - (BOOL)showsDateInFloatingLockScreenAlert;	// 0x30b385f5
// declared property getter: - (BOOL)showsSubtitle;	// 0x30b38575
// declared property getter: - (BOOL)usesVariableLayout;	// 0x30b385b5
@end

