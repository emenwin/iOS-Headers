/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol IMDAppleIDSRegistrationCenterListener
- (void)center:(id)arg1 failedDeregistration:(id)arg2 error:(int)arg3 info:(id)arg4;
- (void)center:(id)arg1 failedRegistration:(id)arg2 error:(int)arg3 info:(id)arg4;
- (void)center:(id)arg1 succeededDeregistration:(id)arg2;
- (void)center:(id)arg1 succeededRegistration:(id)arg2;
- (void)center:(id)arg1 failedProvisioning:(id)arg2 error:(int)arg3 info:(id)arg4;
- (void)center:(id)arg1 succeededProvisioning:(id)arg2;
@end
