//
// PROJECT:         Aspia Remote Desktop
// FILE:            client/client_session_file_transfer.h
// LICENSE:         See top-level directory
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#ifndef _ASPIA_CLIENT__CLIENT_SESSION_FILE_TRANSFER_H
#define _ASPIA_CLIENT__CLIENT_SESSION_FILE_TRANSFER_H

#include "client/client_session.h"
#include "proto/file_transfer_session.pb.h"
#include "ui/file_manager.h"

namespace aspia {

class ClientSessionFileTransfer :
    public ClientSession,
    private FileManager::Delegate
{
public:
    ClientSessionFileTransfer(const ClientConfig& config,
                              ClientSession::Delegate* delegate);
    ~ClientSessionFileTransfer();

private:
    // ClientSession implementation.
    void Send(const IOBuffer& buffer) override;

    // FileManager::Delegate implementation.
    void OnWindowClose() override;
    void OnDriveListRequest(FileManager::PanelType panel_type) override;
    void OnDirectoryListRequest(FileManager::PanelType panel_type, const std::wstring& path) override;
    void OnSendFile(const std::wstring& from_path, const std::wstring& to_path) override;
    void OnRecieveFile(const std::wstring& from_path, const std::wstring& to_path) override;

    bool ReadDriveListMessage(const proto::DriveList& drive_list);
    bool ReadDirectoryListMessage(const proto::DirectoryList& direcrory_list);
    bool ReadFileMessage(const proto::File& file);

    void WriteMessage(const proto::file_transfer::ClientToHost& message);

    std::unique_ptr<FileManager> file_manager_;

    DISALLOW_COPY_AND_ASSIGN(ClientSessionFileTransfer);
};

} // namespace aspia

#endif // _ASPIA_CLIENT__CLIENT_SESSION_FILE_TRANSFER_H