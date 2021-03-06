/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library
#import "AppSupport-Structs.h"

@protocol RadiosPreferencesDelegate;

@interface RadiosPreferences : NSObject {
	SCPreferencesRef _prefs;	// 4 = 0x4
	int _applySkipCount;	// 8 = 0x8
	id<RadiosPreferencesDelegate> _delegate;	// 12 = 0xc
	BOOL _isCachedAirplaneModeValid;	// 16 = 0x10
	BOOL _cachedAirplaneMode;	// 17 = 0x11
@private
	BOOL notifyForExternalChangeOnly;	// 18 = 0x12
}
@property(assign, nonatomic) BOOL airplaneMode;	// G=0x34367d5d; S=0x34367dc9; 
@property(assign, nonatomic) id<RadiosPreferencesDelegate> delegate;	// G=0x34368099; S=0x343680a9; @synthesize=_delegate
@property(assign, nonatomic) BOOL notifyForExternalChangeOnly;	// G=0x343680b9; S=0x343680c9; @synthesize
- (id)init;	// 0x34367c91
// declared property getter: - (BOOL)airplaneMode;	// 0x34367d5d
- (void)dealloc;	// 0x34367cf1
// declared property getter: - (id)delegate;	// 0x34368099
- (void *)getValueForKey:(id)key;	// 0x34367fe1
- (void)initializeSCPrefs:(id)prefs;	// 0x34367e51
// declared property getter: - (BOOL)notifyForExternalChangeOnly;	// 0x343680b9
- (void)notifyTarget:(unsigned)target;	// 0x34367f39
- (void)refresh;	// 0x34367e31
// declared property setter: - (void)setAirplaneMode:(BOOL)mode;	// 0x34367dc9
- (void)setCallback:(/*function-pointer*/ void *)callback withContext:(XXStruct_K1psTC *)context;	// 0x34368081
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x343680a9
// declared property setter: - (void)setNotifyForExternalChangeOnly:(BOOL)externalChangeOnly;	// 0x343680c9
- (void)setValue:(void *)value forKey:(id)key;	// 0x34367ff5
- (void)synchronize;	// 0x34367fcd
@end

