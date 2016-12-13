// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: google/cloud/billing/v1/cloud_billing.proto
// Original file comments:
// Copyright 2016 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef GRPC_google_2fcloud_2fbilling_2fv1_2fcloud_5fbilling_2eproto__INCLUDED
#define GRPC_google_2fcloud_2fbilling_2fv1_2fcloud_5fbilling_2eproto__INCLUDED

#include "google/cloud/billing/v1/cloud_billing.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace google {
namespace cloud {
namespace billing {
namespace v1 {

// Retrieves Google Cloud Console billing accounts and associates them with
// projects.
class CloudBilling GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Gets information about a billing account. The current authenticated user
    // must be an [owner of the billing
    // account](https://support.google.com/cloud/answer/4430947).
    virtual ::grpc::Status GetBillingAccount(::grpc::ClientContext* context, const ::google::cloud::billing::v1::GetBillingAccountRequest& request, ::google::cloud::billing::v1::BillingAccount* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::billing::v1::BillingAccount>> AsyncGetBillingAccount(::grpc::ClientContext* context, const ::google::cloud::billing::v1::GetBillingAccountRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::billing::v1::BillingAccount>>(AsyncGetBillingAccountRaw(context, request, cq));
    }
    // Lists the billing accounts that the current authenticated user
    // [owns](https://support.google.com/cloud/answer/4430947).
    virtual ::grpc::Status ListBillingAccounts(::grpc::ClientContext* context, const ::google::cloud::billing::v1::ListBillingAccountsRequest& request, ::google::cloud::billing::v1::ListBillingAccountsResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::billing::v1::ListBillingAccountsResponse>> AsyncListBillingAccounts(::grpc::ClientContext* context, const ::google::cloud::billing::v1::ListBillingAccountsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::billing::v1::ListBillingAccountsResponse>>(AsyncListBillingAccountsRaw(context, request, cq));
    }
    // Lists the projects associated with a billing account. The current
    // authenticated user must be an [owner of the billing
    // account](https://support.google.com/cloud/answer/4430947).
    virtual ::grpc::Status ListProjectBillingInfo(::grpc::ClientContext* context, const ::google::cloud::billing::v1::ListProjectBillingInfoRequest& request, ::google::cloud::billing::v1::ListProjectBillingInfoResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::billing::v1::ListProjectBillingInfoResponse>> AsyncListProjectBillingInfo(::grpc::ClientContext* context, const ::google::cloud::billing::v1::ListProjectBillingInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::billing::v1::ListProjectBillingInfoResponse>>(AsyncListProjectBillingInfoRaw(context, request, cq));
    }
    // Gets the billing information for a project. The current authenticated user
    // must have [permission to view the
    // project](https://cloud.google.com/docs/permissions-overview#h.bgs0oxofvnoo
    // ).
    virtual ::grpc::Status GetProjectBillingInfo(::grpc::ClientContext* context, const ::google::cloud::billing::v1::GetProjectBillingInfoRequest& request, ::google::cloud::billing::v1::ProjectBillingInfo* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::billing::v1::ProjectBillingInfo>> AsyncGetProjectBillingInfo(::grpc::ClientContext* context, const ::google::cloud::billing::v1::GetProjectBillingInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::billing::v1::ProjectBillingInfo>>(AsyncGetProjectBillingInfoRaw(context, request, cq));
    }
    // Sets or updates the billing account associated with a project. You specify
    // the new billing account by setting the `billing_account_name` in the
    // `ProjectBillingInfo` resource to the resource name of a billing account.
    // Associating a project with an open billing account enables billing on the
    // project and allows charges for resource usage. If the project already had a
    // billing account, this method changes the billing account used for resource
    // usage charges.
    //
    // *Note:* Incurred charges that have not yet been reported in the transaction
    // history of the Google Cloud Console may be billed to the new billing
    // account, even if the charge occurred before the new billing account was
    // assigned to the project.
    //
    // The current authenticated user must have ownership privileges for both the
    // [project](https://cloud.google.com/docs/permissions-overview#h.bgs0oxofvnoo
    // ) and the [billing
    // account](https://support.google.com/cloud/answer/4430947).
    //
    // You can disable billing on the project by setting the
    // `billing_account_name` field to empty. This action disassociates the
    // current billing account from the project. Any billable activity of your
    // in-use services will stop, and your application could stop functioning as
    // expected. Any unbilled charges to date will be billed to the previously
    // associated account. The current authenticated user must be either an owner
    // of the project or an owner of the billing account for the project.
    //
    // Note that associating a project with a *closed* billing account will have
    // much the same effect as disabling billing on the project: any paid
    // resources used by the project will be shut down. Thus, unless you wish to
    // disable billing, you should always call this method with the name of an
    // *open* billing account.
    virtual ::grpc::Status UpdateProjectBillingInfo(::grpc::ClientContext* context, const ::google::cloud::billing::v1::UpdateProjectBillingInfoRequest& request, ::google::cloud::billing::v1::ProjectBillingInfo* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::billing::v1::ProjectBillingInfo>> AsyncUpdateProjectBillingInfo(::grpc::ClientContext* context, const ::google::cloud::billing::v1::UpdateProjectBillingInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::billing::v1::ProjectBillingInfo>>(AsyncUpdateProjectBillingInfoRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::billing::v1::BillingAccount>* AsyncGetBillingAccountRaw(::grpc::ClientContext* context, const ::google::cloud::billing::v1::GetBillingAccountRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::billing::v1::ListBillingAccountsResponse>* AsyncListBillingAccountsRaw(::grpc::ClientContext* context, const ::google::cloud::billing::v1::ListBillingAccountsRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::billing::v1::ListProjectBillingInfoResponse>* AsyncListProjectBillingInfoRaw(::grpc::ClientContext* context, const ::google::cloud::billing::v1::ListProjectBillingInfoRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::billing::v1::ProjectBillingInfo>* AsyncGetProjectBillingInfoRaw(::grpc::ClientContext* context, const ::google::cloud::billing::v1::GetProjectBillingInfoRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::cloud::billing::v1::ProjectBillingInfo>* AsyncUpdateProjectBillingInfoRaw(::grpc::ClientContext* context, const ::google::cloud::billing::v1::UpdateProjectBillingInfoRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetBillingAccount(::grpc::ClientContext* context, const ::google::cloud::billing::v1::GetBillingAccountRequest& request, ::google::cloud::billing::v1::BillingAccount* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::BillingAccount>> AsyncGetBillingAccount(::grpc::ClientContext* context, const ::google::cloud::billing::v1::GetBillingAccountRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::BillingAccount>>(AsyncGetBillingAccountRaw(context, request, cq));
    }
    ::grpc::Status ListBillingAccounts(::grpc::ClientContext* context, const ::google::cloud::billing::v1::ListBillingAccountsRequest& request, ::google::cloud::billing::v1::ListBillingAccountsResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::ListBillingAccountsResponse>> AsyncListBillingAccounts(::grpc::ClientContext* context, const ::google::cloud::billing::v1::ListBillingAccountsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::ListBillingAccountsResponse>>(AsyncListBillingAccountsRaw(context, request, cq));
    }
    ::grpc::Status ListProjectBillingInfo(::grpc::ClientContext* context, const ::google::cloud::billing::v1::ListProjectBillingInfoRequest& request, ::google::cloud::billing::v1::ListProjectBillingInfoResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::ListProjectBillingInfoResponse>> AsyncListProjectBillingInfo(::grpc::ClientContext* context, const ::google::cloud::billing::v1::ListProjectBillingInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::ListProjectBillingInfoResponse>>(AsyncListProjectBillingInfoRaw(context, request, cq));
    }
    ::grpc::Status GetProjectBillingInfo(::grpc::ClientContext* context, const ::google::cloud::billing::v1::GetProjectBillingInfoRequest& request, ::google::cloud::billing::v1::ProjectBillingInfo* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::ProjectBillingInfo>> AsyncGetProjectBillingInfo(::grpc::ClientContext* context, const ::google::cloud::billing::v1::GetProjectBillingInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::ProjectBillingInfo>>(AsyncGetProjectBillingInfoRaw(context, request, cq));
    }
    ::grpc::Status UpdateProjectBillingInfo(::grpc::ClientContext* context, const ::google::cloud::billing::v1::UpdateProjectBillingInfoRequest& request, ::google::cloud::billing::v1::ProjectBillingInfo* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::ProjectBillingInfo>> AsyncUpdateProjectBillingInfo(::grpc::ClientContext* context, const ::google::cloud::billing::v1::UpdateProjectBillingInfoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::ProjectBillingInfo>>(AsyncUpdateProjectBillingInfoRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::BillingAccount>* AsyncGetBillingAccountRaw(::grpc::ClientContext* context, const ::google::cloud::billing::v1::GetBillingAccountRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::ListBillingAccountsResponse>* AsyncListBillingAccountsRaw(::grpc::ClientContext* context, const ::google::cloud::billing::v1::ListBillingAccountsRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::ListProjectBillingInfoResponse>* AsyncListProjectBillingInfoRaw(::grpc::ClientContext* context, const ::google::cloud::billing::v1::ListProjectBillingInfoRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::ProjectBillingInfo>* AsyncGetProjectBillingInfoRaw(::grpc::ClientContext* context, const ::google::cloud::billing::v1::GetProjectBillingInfoRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::google::cloud::billing::v1::ProjectBillingInfo>* AsyncUpdateProjectBillingInfoRaw(::grpc::ClientContext* context, const ::google::cloud::billing::v1::UpdateProjectBillingInfoRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_GetBillingAccount_;
    const ::grpc::RpcMethod rpcmethod_ListBillingAccounts_;
    const ::grpc::RpcMethod rpcmethod_ListProjectBillingInfo_;
    const ::grpc::RpcMethod rpcmethod_GetProjectBillingInfo_;
    const ::grpc::RpcMethod rpcmethod_UpdateProjectBillingInfo_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Gets information about a billing account. The current authenticated user
    // must be an [owner of the billing
    // account](https://support.google.com/cloud/answer/4430947).
    virtual ::grpc::Status GetBillingAccount(::grpc::ServerContext* context, const ::google::cloud::billing::v1::GetBillingAccountRequest* request, ::google::cloud::billing::v1::BillingAccount* response);
    // Lists the billing accounts that the current authenticated user
    // [owns](https://support.google.com/cloud/answer/4430947).
    virtual ::grpc::Status ListBillingAccounts(::grpc::ServerContext* context, const ::google::cloud::billing::v1::ListBillingAccountsRequest* request, ::google::cloud::billing::v1::ListBillingAccountsResponse* response);
    // Lists the projects associated with a billing account. The current
    // authenticated user must be an [owner of the billing
    // account](https://support.google.com/cloud/answer/4430947).
    virtual ::grpc::Status ListProjectBillingInfo(::grpc::ServerContext* context, const ::google::cloud::billing::v1::ListProjectBillingInfoRequest* request, ::google::cloud::billing::v1::ListProjectBillingInfoResponse* response);
    // Gets the billing information for a project. The current authenticated user
    // must have [permission to view the
    // project](https://cloud.google.com/docs/permissions-overview#h.bgs0oxofvnoo
    // ).
    virtual ::grpc::Status GetProjectBillingInfo(::grpc::ServerContext* context, const ::google::cloud::billing::v1::GetProjectBillingInfoRequest* request, ::google::cloud::billing::v1::ProjectBillingInfo* response);
    // Sets or updates the billing account associated with a project. You specify
    // the new billing account by setting the `billing_account_name` in the
    // `ProjectBillingInfo` resource to the resource name of a billing account.
    // Associating a project with an open billing account enables billing on the
    // project and allows charges for resource usage. If the project already had a
    // billing account, this method changes the billing account used for resource
    // usage charges.
    //
    // *Note:* Incurred charges that have not yet been reported in the transaction
    // history of the Google Cloud Console may be billed to the new billing
    // account, even if the charge occurred before the new billing account was
    // assigned to the project.
    //
    // The current authenticated user must have ownership privileges for both the
    // [project](https://cloud.google.com/docs/permissions-overview#h.bgs0oxofvnoo
    // ) and the [billing
    // account](https://support.google.com/cloud/answer/4430947).
    //
    // You can disable billing on the project by setting the
    // `billing_account_name` field to empty. This action disassociates the
    // current billing account from the project. Any billable activity of your
    // in-use services will stop, and your application could stop functioning as
    // expected. Any unbilled charges to date will be billed to the previously
    // associated account. The current authenticated user must be either an owner
    // of the project or an owner of the billing account for the project.
    //
    // Note that associating a project with a *closed* billing account will have
    // much the same effect as disabling billing on the project: any paid
    // resources used by the project will be shut down. Thus, unless you wish to
    // disable billing, you should always call this method with the name of an
    // *open* billing account.
    virtual ::grpc::Status UpdateProjectBillingInfo(::grpc::ServerContext* context, const ::google::cloud::billing::v1::UpdateProjectBillingInfoRequest* request, ::google::cloud::billing::v1::ProjectBillingInfo* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetBillingAccount : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetBillingAccount() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetBillingAccount() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetBillingAccount(::grpc::ServerContext* context, const ::google::cloud::billing::v1::GetBillingAccountRequest* request, ::google::cloud::billing::v1::BillingAccount* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetBillingAccount(::grpc::ServerContext* context, ::google::cloud::billing::v1::GetBillingAccountRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::billing::v1::BillingAccount>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ListBillingAccounts : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ListBillingAccounts() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_ListBillingAccounts() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListBillingAccounts(::grpc::ServerContext* context, const ::google::cloud::billing::v1::ListBillingAccountsRequest* request, ::google::cloud::billing::v1::ListBillingAccountsResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestListBillingAccounts(::grpc::ServerContext* context, ::google::cloud::billing::v1::ListBillingAccountsRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::billing::v1::ListBillingAccountsResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_ListProjectBillingInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_ListProjectBillingInfo() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_ListProjectBillingInfo() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListProjectBillingInfo(::grpc::ServerContext* context, const ::google::cloud::billing::v1::ListProjectBillingInfoRequest* request, ::google::cloud::billing::v1::ListProjectBillingInfoResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestListProjectBillingInfo(::grpc::ServerContext* context, ::google::cloud::billing::v1::ListProjectBillingInfoRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::billing::v1::ListProjectBillingInfoResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetProjectBillingInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetProjectBillingInfo() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_GetProjectBillingInfo() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetProjectBillingInfo(::grpc::ServerContext* context, const ::google::cloud::billing::v1::GetProjectBillingInfoRequest* request, ::google::cloud::billing::v1::ProjectBillingInfo* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetProjectBillingInfo(::grpc::ServerContext* context, ::google::cloud::billing::v1::GetProjectBillingInfoRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::billing::v1::ProjectBillingInfo>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_UpdateProjectBillingInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_UpdateProjectBillingInfo() {
      ::grpc::Service::MarkMethodAsync(4);
    }
    ~WithAsyncMethod_UpdateProjectBillingInfo() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateProjectBillingInfo(::grpc::ServerContext* context, const ::google::cloud::billing::v1::UpdateProjectBillingInfoRequest* request, ::google::cloud::billing::v1::ProjectBillingInfo* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUpdateProjectBillingInfo(::grpc::ServerContext* context, ::google::cloud::billing::v1::UpdateProjectBillingInfoRequest* request, ::grpc::ServerAsyncResponseWriter< ::google::cloud::billing::v1::ProjectBillingInfo>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(4, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetBillingAccount<WithAsyncMethod_ListBillingAccounts<WithAsyncMethod_ListProjectBillingInfo<WithAsyncMethod_GetProjectBillingInfo<WithAsyncMethod_UpdateProjectBillingInfo<Service > > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_GetBillingAccount : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetBillingAccount() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetBillingAccount() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetBillingAccount(::grpc::ServerContext* context, const ::google::cloud::billing::v1::GetBillingAccountRequest* request, ::google::cloud::billing::v1::BillingAccount* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ListBillingAccounts : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ListBillingAccounts() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_ListBillingAccounts() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListBillingAccounts(::grpc::ServerContext* context, const ::google::cloud::billing::v1::ListBillingAccountsRequest* request, ::google::cloud::billing::v1::ListBillingAccountsResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_ListProjectBillingInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_ListProjectBillingInfo() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_ListProjectBillingInfo() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status ListProjectBillingInfo(::grpc::ServerContext* context, const ::google::cloud::billing::v1::ListProjectBillingInfoRequest* request, ::google::cloud::billing::v1::ListProjectBillingInfoResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetProjectBillingInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetProjectBillingInfo() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_GetProjectBillingInfo() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetProjectBillingInfo(::grpc::ServerContext* context, const ::google::cloud::billing::v1::GetProjectBillingInfoRequest* request, ::google::cloud::billing::v1::ProjectBillingInfo* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_UpdateProjectBillingInfo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_UpdateProjectBillingInfo() {
      ::grpc::Service::MarkMethodGeneric(4);
    }
    ~WithGenericMethod_UpdateProjectBillingInfo() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status UpdateProjectBillingInfo(::grpc::ServerContext* context, const ::google::cloud::billing::v1::UpdateProjectBillingInfoRequest* request, ::google::cloud::billing::v1::ProjectBillingInfo* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace v1
}  // namespace billing
}  // namespace cloud
}  // namespace google


#endif  // GRPC_google_2fcloud_2fbilling_2fv1_2fcloud_5fbilling_2eproto__INCLUDED