/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIControl.h"

@class NSLocale, NSTimeZone, UIPickerView, NSCalendar, NSDate;

@interface UIDatePicker : UIControl <NSCoding> {
@private
	UIPickerView *_pickerView;	// 72 = 0x48
}
@property(copy, nonatomic) NSCalendar *calendar;	// G=0x30286321; S=0x30286341; @dynamic
@property(assign, nonatomic) double countDownDuration;	// G=0x3028641d; S=0x3028643d; @dynamic
@property(retain, nonatomic) NSDate *date;	// G=0x301af75d; S=0x30286361; @dynamic
@property(retain) id dateComponents;	// G=0x302864ed; S=0x3028650d; converted property
@property(assign, nonatomic) int datePickerMode;	// G=0x30286261; S=0x301a4e11; @dynamic
@property(readonly, assign, nonatomic, getter=_dateUnderSelectionBar) NSDate *dateUnderSelectionBar;	// G=0x30286681; 
@property(retain, nonatomic) NSLocale *locale;	// G=0x302862c1; S=0x302862d1; @dynamic
@property(retain, nonatomic) NSDate *maximumDate;	// G=0x302863dd; S=0x302863fd; @dynamic
@property(retain, nonatomic) NSDate *minimumDate;	// G=0x3028639d; S=0x302863bd; @dynamic
@property(assign, nonatomic) int minuteInterval;	// G=0x3028645d; S=0x301a51b9; @dynamic
@property(assign) double timeInterval;	// G=0x302864dd; S=0x302864cd; converted property
@property(retain, nonatomic) NSTimeZone *timeZone;	// G=0x302862e1; S=0x30286301; @dynamic
@property(assign, nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) BOOL usesBlackChrome;	// G=0x3028665d; S=0x3028663d; 
- (id)initWithCoder:(id)coder;	// 0x30285cc5
- (id)initWithFrame:(CGRect)frame;	// 0x301a3bdd
- (float)_contentWidth;	// 0x302865dd
// declared property getter: - (id)_dateUnderSelectionBar;	// 0x30286681
- (void)_insertPickerView;	// 0x301a3ef5
- (id)_locale;	// 0x30286281
- (void)_populateArchivedSubviews:(id)subviews;	// 0x30285f7d
- (void)_setHidesLabels:(BOOL)labels;	// 0x3028661d
- (void)_setHighlightsToday:(BOOL)today;	// 0x302865fd
- (void)_setLocale:(id)locale;	// 0x302862a1
// declared property setter: - (void)_setUsesBlackChrome:(BOOL)chrome;	// 0x3028663d
// declared property getter: - (BOOL)_usesBlackChrome;	// 0x3028665d
- (void)awakeFromNib;	// 0x30285f11
// declared property getter: - (id)calendar;	// 0x30286321
// declared property getter: - (double)countDownDuration;	// 0x3028641d
// declared property getter: - (id)date;	// 0x301af75d
// converted property getter: - (id)dateComponents;	// 0x302864ed
// declared property getter: - (int)datePickerMode;	// 0x30286261
- (void)encodeWithCoder:(id)coder;	// 0x30285fd1
- (int)hour;	// 0x3028656d
// declared property getter: - (id)locale;	// 0x302862c1
// declared property getter: - (id)maximumDate;	// 0x302863dd
// declared property getter: - (id)minimumDate;	// 0x3028639d
- (int)minute;	// 0x3028658d
// declared property getter: - (int)minuteInterval;	// 0x3028645d
- (int)second;	// 0x302865ad
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x30286341
// declared property setter: - (void)setCountDownDuration:(double)duration;	// 0x3028643d
// declared property setter: - (void)setDate:(id)date;	// 0x30286361
- (void)setDate:(id)date animate:(BOOL)animate;	// 0x302865cd
- (void)setDate:(id)date animated:(BOOL)animated;	// 0x301a5509
// converted property setter: - (void)setDateComponents:(id)components;	// 0x3028650d
// declared property setter: - (void)setDatePickerMode:(int)mode;	// 0x301a4e11
- (void)setDelegate:(id)delegate;	// 0x302864ad
- (void)setFrame:(CGRect)frame;	// 0x301a3e81
- (void)setHighlightsToday:(BOOL)today;	// 0x3028654d
// declared property setter: - (void)setLocale:(id)locale;	// 0x302862d1
// declared property setter: - (void)setMaximumDate:(id)date;	// 0x302863fd
// declared property setter: - (void)setMinimumDate:(id)date;	// 0x302863bd
// declared property setter: - (void)setMinuteInterval:(int)interval;	// 0x301a51b9
- (void)setStaggerTimeIntervals:(BOOL)intervals;	// 0x3028652d
// converted property setter: - (void)setTimeInterval:(double)interval;	// 0x302864cd
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x30286301
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3028647d
// converted property getter: - (double)timeInterval;	// 0x302864dd
// declared property getter: - (id)timeZone;	// 0x302862e1
@end

