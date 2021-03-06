/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <NSObject.h> // Unknown library

@class ICSCalendar;

@interface ICSDocument : NSObject {
	ICSCalendar *_calendar;	// 4 = 0x4
}
@property(readonly, retain) ICSCalendar *calendar;	// G=0x300214e1; converted property
- (id)initWithCalendar:(id)calendar;	// 0x3002175d
- (id)initWithContentsOfURL:(id)url options:(unsigned)options error:(id *)error;	// 0x30021691
- (id)initWithData:(id)data encoding:(unsigned)encoding options:(unsigned)options error:(id *)error;	// 0x30021611
- (id)initWithData:(id)data options:(unsigned)options error:(id *)error;	// 0x3002156d
- (id)initWithICSString:(id)icsstring options:(unsigned)options error:(id *)error;	// 0x300216d9
- (id)ICSDataWithOptions:(unsigned)options;	// 0x300217ad
- (id)ICSStringWithOptions:(unsigned)options;	// 0x30021515
// converted property getter: - (id)calendar;	// 0x300214e1
- (void)dealloc;	// 0x30021715
- (BOOL)validate:(id *)validate;	// 0x300214f1
@end

