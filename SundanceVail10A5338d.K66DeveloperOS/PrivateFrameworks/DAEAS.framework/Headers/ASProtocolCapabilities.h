/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface ASProtocolCapabilities : NSObject {
	NSString *_calConstraintsPlistPath;	// 4 = 0x4
	NSString *_abConstraintsPlistPath;	// 8 = 0x8
}
- (id)initWithProtocolVersionString:(id)protocolVersionString;	// 0x36eed151
- (id)_abConstraintsPlistPath;	// 0x36eed3c1
- (id)_calConstraintsPlistPath;	// 0x36eed321
- (id)addressBookConstraintsPath;	// 0x36eed41d
- (id)calendarConstraintsPath;	// 0x36eed37d
- (void)dealloc;	// 0x36eed281
- (BOOL)serverUpdatesAttendeeStatusOnEvents;	// 0x36eed31d
- (BOOL)supportsEmailFlagging;	// 0x36eed311
- (BOOL)supportsItemOperationsCommand;	// 0x36eed319
- (BOOL)supportsMailboxSearch;	// 0x36eed30d
- (BOOL)supportsNoteSyncing;	// 0x36eed461
- (BOOL)supportsProtocolVersion:(id)version;	// 0x36eed2e5
- (BOOL)supportsSettingsCommand;	// 0x36eed315
@end
