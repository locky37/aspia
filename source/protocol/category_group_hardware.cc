//
// PROJECT:         Aspia Remote Desktop
// FILE:            protocol/category_group_hardware.cc
// LICENSE:         Mozilla Public License Version 2.0
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#include "base/printer_enumerator.h"
#include "protocol/system_info_constants.h"
#include "protocol/category_group_hardware.h"
#include "protocol/category_info.h"
#include "proto/system_info_session_message.pb.h"
#include "ui/system_info/output_proxy.h"
#include "ui/resource.h"

namespace aspia {

class CategoryDmiBios : public CategoryInfo
{
public:
    CategoryDmiBios() : CategoryInfo(system_info::hardware::dmi::kBIOS, "BIOS", IDI_BIOS)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryDmiBios);
};

class CategoryDmiSystem : public CategoryInfo
{
public:
    CategoryDmiSystem() : CategoryInfo(system_info::hardware::dmi::kSystem, "System", IDI_COMPUTER)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryDmiSystem);
};

class CategoryDmiMotherboard : public CategoryInfo
{
public:
    CategoryDmiMotherboard()
        : CategoryInfo(system_info::hardware::dmi::kMotherboard, "Motherboard", IDI_MOTHERBOARD)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryDmiMotherboard);
};

class CategoryDmiChassis : public CategoryInfo
{
public:
    CategoryDmiChassis()
        : CategoryInfo(system_info::hardware::dmi::kChassis, "Chassis", IDI_SERVER)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryDmiChassis);
};

class CategoryDmiCaches : public CategoryInfo
{
public:
    CategoryDmiCaches() : CategoryInfo(system_info::hardware::dmi::kCaches, "Caches", IDI_CHIP)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryDmiCaches);
};

class CategoryDmiProcessors : public CategoryInfo
{
public:
    CategoryDmiProcessors()
        : CategoryInfo(system_info::hardware::dmi::kProcessors, "Processors", IDI_PROCESSOR)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryDmiProcessors);
};

class CategoryDmiMemoryDevices : public CategoryInfo
{
public:
    CategoryDmiMemoryDevices()
        : CategoryInfo(system_info::hardware::dmi::kMemoryDevices, "Memory Devices", IDI_MEMORY)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryDmiMemoryDevices);
};

class CategoryDmiSystemSlots : public CategoryInfo
{
public:
    CategoryDmiSystemSlots()
        : CategoryInfo(system_info::hardware::dmi::kSystemSlots, "System Slots", IDI_PORT)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryDmiSystemSlots);
};

class CategoryDmiPortConnectors : public CategoryInfo
{
public:
    CategoryDmiPortConnectors()
        : CategoryInfo(system_info::hardware::dmi::kPortConnectors, "Port Connectors", IDI_PORT)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryDmiPortConnectors);
};

class CategoryDmiOnboardDevices : public CategoryInfo
{
public:
    CategoryDmiOnboardDevices()
        : CategoryInfo(system_info::hardware::dmi::kOnboardDevices,
                       "Onboard Devices",
                       IDI_MOTHERBOARD)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryDmiOnboardDevices);
};

class CategoryDmiBuildinPointing : public CategoryInfo
{
public:
    CategoryDmiBuildinPointing()
        : CategoryInfo(system_info::hardware::dmi::kBuildinPointing,
                       "Build-in Pointing",
                       IDI_MOUSE)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryDmiBuildinPointing);
};

class CategoryDmiPortableBattery : public CategoryInfo
{
public:
    CategoryDmiPortableBattery()
        : CategoryInfo(system_info::hardware::dmi::kPortableBattery,
                       "Portable Battery",
                       IDI_BATTERY)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryDmiPortableBattery);
};

class CategoryGroupDMI : public CategoryGroup
{
public:
    CategoryGroupDMI() : CategoryGroup("DMI", IDI_COMPUTER)
    {
        CategoryList* child_list = mutable_child_list();

        child_list->emplace_back(std::make_unique<CategoryDmiBios>());
        child_list->emplace_back(std::make_unique<CategoryDmiSystem>());
        child_list->emplace_back(std::make_unique<CategoryDmiMotherboard>());
        child_list->emplace_back(std::make_unique<CategoryDmiChassis>());
        child_list->emplace_back(std::make_unique<CategoryDmiCaches>());
        child_list->emplace_back(std::make_unique<CategoryDmiProcessors>());
        child_list->emplace_back(std::make_unique<CategoryDmiMemoryDevices>());
        child_list->emplace_back(std::make_unique<CategoryDmiSystemSlots>());
        child_list->emplace_back(std::make_unique<CategoryDmiPortConnectors>());
        child_list->emplace_back(std::make_unique<CategoryDmiOnboardDevices>());
        child_list->emplace_back(std::make_unique<CategoryDmiBuildinPointing>());
        child_list->emplace_back(std::make_unique<CategoryDmiPortableBattery>());
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryGroupDMI);
};

class CategoryCPU : public CategoryInfo
{
public:
    CategoryCPU()
        : CategoryInfo(system_info::hardware::kCPU, "Central Processor", IDI_PROCESSOR)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryCPU);
};

class CategoryOpticalDrives : public CategoryInfo
{
public:
    CategoryOpticalDrives()
        : CategoryInfo(system_info::hardware::storage::kOpticalDrives,
                       "Optical Drives",
                       IDI_DRIVE_DISK)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryOpticalDrives);
};

class CategoryATA : public CategoryInfo
{
public:
    CategoryATA() : CategoryInfo(system_info::hardware::storage::kATA, "ATA", IDI_DRIVE)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryATA);
};

class CategorySMART : public CategoryInfo
{
public:
    CategorySMART()
        : CategoryInfo(system_info::hardware::storage::kSMART, "S.M.A.R.T.", IDI_DRIVE)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategorySMART);
};

class CategoryGroupStorage : public CategoryGroup
{
public:
    CategoryGroupStorage()
        : CategoryGroup("Storage", IDI_DRIVE)
    {
        CategoryList* child_list = mutable_child_list();
        child_list->emplace_back(std::make_unique<CategoryOpticalDrives>());
        child_list->emplace_back(std::make_unique<CategoryATA>());
        child_list->emplace_back(std::make_unique<CategorySMART>());
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryGroupStorage);
};

class CategoryWindowsVideo : public CategoryInfo
{
public:
    CategoryWindowsVideo()
        : CategoryInfo(system_info::hardware::display::kWindowsVideo,
                       "Windows Video",
                       IDI_MONITOR)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryWindowsVideo);
};

class CategoryMonitor : public CategoryInfo
{
public:
    CategoryMonitor()
        : CategoryInfo(system_info::hardware::display::kMonitor, "Monitor", IDI_MONITOR)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryMonitor);
};

class CategoryOpenGL : public CategoryInfo
{
public:
    CategoryOpenGL()
        : CategoryInfo(system_info::hardware::display::kOpenGL, "OpenGL", IDI_CLAPPERBOARD)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryOpenGL);
};

class CategoryGroupDisplay : public CategoryGroup
{
public:
    CategoryGroupDisplay() : CategoryGroup("Display", IDI_MONITOR)
    {
        CategoryList* child_list = mutable_child_list();
        child_list->emplace_back(std::make_unique<CategoryWindowsVideo>());
        child_list->emplace_back(std::make_unique<CategoryMonitor>());
        child_list->emplace_back(std::make_unique<CategoryOpenGL>());
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryGroupDisplay);
};

class CategoryPrinters : public CategoryInfo
{
public:
    CategoryPrinters() : CategoryInfo(system_info::hardware::kPrinters, "Printers", IDI_PRINTER)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        system_info::Printers message;

        if (!message.ParseFromString(data))
            return;

        Output::Table table(output, Name());

        {
            Output::TableHeader header(output);
            output->AddHeaderItem("Parameter", 200);
            output->AddHeaderItem("Value", 200);
        }

        for (int index = 0; index < message.item_size(); ++index)
        {
            const system_info::Printers::Item& item = message.item(index);

            Output::Group group(output, item.name(), Icon());

            output->AddParam(IDI_PRINTER, "Default Printer", item.is_default() ? "Yes" : "No");
            output->AddParam(IDI_PRINTER_SHARE, "Shared Printer", item.is_shared() ? "Yes" : "No");
            output->AddParam(IDI_PORT, "Port", item.port_name());
            output->AddParam(IDI_PCI, "Driver", item.driver_name());
            output->AddParam(IDI_PCI, "Device Name", item.device_name());
            output->AddParam(IDI_PRINTER, "Print Processor", item.print_processor());
            output->AddParam(IDI_PRINTER, "Data Type", item.data_type());
            output->AddParam(IDI_PRINTER, "Print Jobs Queued", std::to_string(item.jobs_count()));

            if (item.paper_width())
            {
                output->AddParam(IDI_DOCUMENT_TEXT,
                                 "Paper Width",
                                 std::to_string(item.paper_width()),
                                 "mm");
            }

            if (item.paper_length())
            {
                output->AddParam(IDI_DOCUMENT_TEXT,
                                 "Paper Length",
                                 std::to_string(item.paper_length()),
                                 "mm");
            }

            if (item.print_quality())
            {
                output->AddParam(IDI_DOCUMENT_TEXT,
                                 "Print Quality",
                                 std::to_string(item.print_quality()),
                                 "dpi");
            }

            output->AddParam(IDI_DOCUMENT_TEXT,
                             "Orientation",
                             OrientationToString(item.orientation()));
        }
    }

    std::string Serialize() final
    {
        system_info::Printers message;

        for (PrinterEnumerator enumerator; !enumerator.IsAtEnd(); enumerator.Advance())
        {
            system_info::Printers::Item* item = message.add_item();

            item->set_name(enumerator.GetName());
            item->set_is_default(enumerator.IsDefault());
            item->set_is_shared(enumerator.IsShared());
            item->set_share_name(enumerator.GetShareName());
            item->set_port_name(enumerator.GetPortName());
            item->set_driver_name(enumerator.GetDriverName());
            item->set_device_name(enumerator.GetDeviceName());
            item->set_print_processor(enumerator.GetPrintProcessor());
            item->set_data_type(enumerator.GetDataType());
            item->set_server_name(enumerator.GetServerName());
            item->set_location(enumerator.GetLocation());
            item->set_comment(enumerator.GetComment());
            item->set_jobs_count(enumerator.GetJobsCount());
            item->set_paper_width(enumerator.GetPaperWidth());
            item->set_paper_length(enumerator.GetPaperLength());
            item->set_print_quality(enumerator.GetPrintQuality());

            switch (enumerator.GetOrientation())
            {
                case PrinterEnumerator::Orientation::PORTRAIT:
                    item->set_orientation(system_info::Printers::Item::ORIENTATION_PORTRAIT);
                    break;

                case PrinterEnumerator::Orientation::LANDSCAPE:
                    item->set_orientation(system_info::Printers::Item::ORIENTATION_LANDSCAPE);
                    break;

                default:
                    item->set_orientation(system_info::Printers::Item::ORIENTATION_UNKNOWN);
                    break;
            }
        }

        return message.SerializeAsString();
    }

private:
    static const char* OrientationToString(system_info::Printers::Item::Orientation orientation)
    {
        switch (orientation)
        {
            case system_info::Printers::Item::ORIENTATION_LANDSCAPE:
                return "Landscape";

            case system_info::Printers::Item::ORIENTATION_PORTRAIT:
                return "Portrait";

            default:
                return "Unknown";
        }
    }

    DISALLOW_COPY_AND_ASSIGN(CategoryPrinters);
};

class CategoryPowerOptions : public CategoryInfo
{
public:
    CategoryPowerOptions()
        : CategoryInfo(system_info::hardware::kPowerOptions, "Power Options", IDI_POWER_SUPPLY)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryPowerOptions);
};

class CategoryAllDevices : public CategoryInfo
{
public:
    CategoryAllDevices()
        : CategoryInfo(system_info::hardware::windows_devices::kAll, "All Devices", IDI_PCI)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryAllDevices);
};

class CategoryUnknownDevices : public CategoryInfo
{
public:
    CategoryUnknownDevices()
        : CategoryInfo(system_info::hardware::windows_devices::kUnknown,
                       "Unknown Devices",
                       IDI_PCI)
    {
        // Nothing
    }

    void Parse(std::shared_ptr<OutputProxy> output, const std::string& data) final
    {
        // TODO
    }

    std::string Serialize() final
    {
        // TODO
        return std::string();
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryUnknownDevices);
};

class CategoryGroupWindowDevices : public CategoryGroup
{
public:
    CategoryGroupWindowDevices() : CategoryGroup("Windows Devices", IDI_PCI)
    {
        CategoryList* child_list = mutable_child_list();
        child_list->emplace_back(std::make_unique<CategoryAllDevices>());
        child_list->emplace_back(std::make_unique<CategoryUnknownDevices>());
    }

private:
    DISALLOW_COPY_AND_ASSIGN(CategoryGroupWindowDevices);
};

CategoryGroupHardware::CategoryGroupHardware() : CategoryGroup("Hardware", IDI_HARDWARE)
{
    CategoryList* child_list = mutable_child_list();
    child_list->emplace_back(std::make_unique<CategoryGroupDMI>());
    child_list->emplace_back(std::make_unique<CategoryCPU>());
    child_list->emplace_back(std::make_unique<CategoryGroupStorage>());
    child_list->emplace_back(std::make_unique<CategoryGroupDisplay>());
    child_list->emplace_back(std::make_unique<CategoryPowerOptions>());
    child_list->emplace_back(std::make_unique<CategoryPrinters>());
    child_list->emplace_back(std::make_unique<CategoryGroupWindowDevices>());
}

} // namespace aspia