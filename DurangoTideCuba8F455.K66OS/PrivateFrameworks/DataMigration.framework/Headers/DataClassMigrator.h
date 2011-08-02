/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

@interface DataClassMigrator : NSObject {
	NSDictionary *_context;	// 4 = 0x4
}
@property(retain, nonatomic) NSDictionary *context;	// G=0x30594119; S=0x30594251; @synthesize=_context
@property(readonly, assign, nonatomic) BOOL didMigrateBackupFromDifferentDevice;	// G=0x30594199; 
@property(readonly, assign, nonatomic) BOOL didRestoreFromBackup;	// G=0x305941d1; 
@property(readonly, assign, nonatomic) BOOL shouldPreserveSettingsAfterRestore;	// G=0x30594161; 
@property(readonly, assign, nonatomic) BOOL wasPasscodeSetInBackup;	// G=0x30594129; 
// declared property getter: - (id)context;	// 0x30594119
- (id)dataClassName;	// 0x30594101
- (void)dealloc;	// 0x30594209
// declared property getter: - (BOOL)didMigrateBackupFromDifferentDevice;	// 0x30594199
// declared property getter: - (BOOL)didRestoreFromBackup;	// 0x305941d1
- (float)estimatedDuration;	// 0x30594109
- (float)migrationProgress;	// 0x30594111
- (BOOL)performMigration;	// 0x30594105
// declared property setter: - (void)setContext:(id)context;	// 0x30594251
// declared property getter: - (BOOL)shouldPreserveSettingsAfterRestore;	// 0x30594161
// declared property getter: - (BOOL)wasPasscodeSetInBackup;	// 0x30594129
@end

